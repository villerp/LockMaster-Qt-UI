#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRect>                //tämä...
#include <QDesktopWidget>       //ja tämä tarvitaan ikkunan keskitykseen ohjelman alkaessa


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //dynaamisia olioita sieltä sun täältä
    olioPinkoodi = new Pinkoodi;
    olioTervetuloa = new Tervetuloa;
    olioSLDatabase = new SLDatabase;
    olioSLAjastin = new SLAjastin;
    olioLukonAvaus = new LukonAvaus;
    olioAktivoimaton = new Aktivoimaton;
    countdown = new QTimer;
    ui->setupUi(this);

    //tässä keskitetään pääikkuna
    QRect position = frameGeometry();
    position.moveCenter(QDesktopWidget().availableGeometry().center());
    move(position.topLeft());
    //this->setWindowState(Qt::WindowMaximized);

    connect(this, SIGNAL(korttiSignal(QString)), this, SLOT(korttiSlot(QString)));      //korttislot saa korttisignaalin, eli sen, mitä RF-lukija saa kortilta
    connect(countdown, SIGNAL(timeout()), this, SLOT(pvmKutsu()));                      //ajastin-connect. pvmKutsu suoritetaan aina kun timeout tapahtuu (tässä tapauksessa sekunnin välein)
    olioSLRFID = new SLRFID;
    connect(olioSLRFID, SIGNAL(canRead()), this, SLOT(readData()));                     //SLRFID-kirjastossa pyörii serial-toiminnot, lisätietoja sieltä

    //alustava kellonajan näyttö, joka ilmestyy heti sovelluksen käynnistyessä. (pieni hienous)
    ui->label->setAlignment(Qt::AlignRight);
    ui->label->setText(olioSLAjastin->Ajastin());

    countdown->start(1000);                                                             //sekunnin (1000 ms) ajastimen käynnistys

    //tässä tehdään pääikkunan kuva ja sen dimensiot
    ui->label_3->setAlignment(Qt::AlignCenter);
    //QWidget *frame = new QWidget(this);
    //frame->setGeometry(350, 170, 500, 600);
    //frame->setStyleSheet("border-image: url(/home/pi/Documents/Qt_Programs/Elektroninen_lukko/kuvat/RFID-kuva.jpg)");       //haluttu kuva
    QPixmap frame("/home/pi/Documents/Qt_Programs/Elektroninen_lukko/kuvat/RFID-kuva.jpg");
    ui->label_3->setPixmap(frame);

    //kortti = "290049DF6A";                                                            //kortin numero voidaan pakottaa halutunlaiseksi, jos esim. rfid-luku ei ole käytettävissä
    //emit korttiSignal(kortti);

    olioLukonAvaus->lukkoProsessiLow();                                                 //pidetään huoli, että sovelluksen käynnistyessä lukko on lukossa
}

//funktiossa serial-kirjaston funktiota kutsutaan, joka palauttaa kortin numeron
void MainWindow::readData()
{
    kortti = olioSLRFID->RFID();
    emit korttiSignal(kortti);                                                          //kortti-string --------------->kortti-slot
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *e) {
  QWidget::mouseDoubleClickEvent(e);
  if(isFullScreen()) {
     this->setWindowState(Qt::WindowMaximized);
  } else {
     this->setWindowState(Qt::WindowFullScreen);
  }
}

//ajastin-kirjaston funktio Ajastin() palauttaa sekunnilleen tarkan kellonajan
void MainWindow::pvmKutsu()
{
    ui->label->setText(olioSLAjastin->Ajastin());
    QString aika = olioSLAjastin->Ajastin();
    aika.resize(2);
    tunnit = aika.toInt();                                      //palautetusta kellonajasta otetaan talteen tunnit (kaksi ensimmäistä merkkiä), jotta tiedetään, onko kyseessä iltakulku vai ei

    tunnit = 24;                                                //tuntien arvon voi testausmielessä pakottaa mieluiseksi (päiväarvot: 6-18, iltaarvot: kaikki muut). Täytyy olla int (tms numero)
}

//tuhotaan ~kaikki
MainWindow::~MainWindow()
{
    delete olioPinkoodi;
    delete olioTervetuloa;
    delete olioSLDatabase;
    delete olioSLAjastin;
    delete countdown;
    delete olioSLRFID;
    olioLukonAvaus->lukkoProsessiLow();                                                 //lukko varmasti lukkoon ohjelman sammuessa
    delete olioLukonAvaus;
    delete olioAktivoimaton;
    delete ui;
}
//kortti-string tulee signaalina tänne ja sen perusteella haetaan tietokannasta tietoja
void MainWindow::korttiSlot(QString kortti)
{
    olioPinkoodi->korttiLahetys(kortti);                                                //Pinkoodi-sivulle lähetetään myös kortin numero

    //SLDatabase-funktiot kannattaa käydä katsoa lähteestä (sldatabase.cpp)
    korttivertaus = olioSLDatabase->korttiF(kortti);
    etunimi = olioSLDatabase->etunimiF(kortti);
    sukunimi = olioSLDatabase->sukunimiF(kortti);
    aktivointi = olioSLDatabase->aktivointiF(kortti);
    idkortti = olioSLDatabase->idkorttiF(kortti);                                       //funktiot palauttavat string-muuttujia
    asiakas = olioSLDatabase->asiakasF(kortti);

    if (kortti == korttivertaus)                                                        //tarkistetaan löytyykö kortti tietokannasta
    {
        if (aktivointi == "0")                                                          //tarkistetaan onko löytynyt kortti aktivoitu
        {
            olioAktivoimaton->Kusahus();
            olioAktivoimaton->show();                                                   //ilmoitus ei-aktivoidusta kortista
            olioSLDatabase->kulkuF(kortti, asiakas, 0, 0);                              //kulkuhistoriaan tulee merkintä (ks. syntaksi -> sldatabase.cpp)
        }
        else
        {
            if(tunnit <= 6 || tunnit > 18)                                              //katsotaan onko kyseessä iltakulku vai ei
            {
                olioSLDatabase->kulkuF(kortti, asiakas, 1, 1);
                olioPinkoodi->playAlkumusa();                                           //jos kyllä, alkaa pinkoodimusat soimaan
                olioPinkoodi->show();                                                   //pinkoodi-ikkuna näytetään
                olioPinkoodi->timer_start(1000);                                        //pinkoodi-ikkunan funktio ajetaan ja se käynnistää ajastimen
            }
            else
            {
                olioSLDatabase->kulkuF(kortti, asiakas, 1, 0);
                olioTervetuloa->timer_start(1000);                                      //jos ei, tervetuloa-ikkunan funktio ajetaan ja se käynnistää ajastimen
                olioTervetuloa->show();                                                 //mennään tervetuloa-ikkunaan
                olioTervetuloa->nimiHaku(etunimi, sukunimi);                            //tervetuloa-ikkunan nimiHaku-funktio ottaa inputteina etu- ja sukunimen, jotka tietokannasta haettiin
                olioTervetuloa->tervetuloaLabel();                                      //tämä funktio toistaa countdown-musan ja syöttää tarvittavat tekstit ikkunaan
                olioLukonAvaus->lukkoProsessiHigh();                                    //pinkoodia ei tässä vaadittu, joten lukko voidaan avata
            }
        }
    }
    else
    {
    olioSLDatabase->korttiNrolisays(kortti);                                  //jos tuntematon kortti luetaan lukijalle, otetaan numero talteen. Tietokantaan ei ilmesty samaa numeroa uudestaan
    }
}
