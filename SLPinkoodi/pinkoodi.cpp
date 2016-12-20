#include "pinkoodi.h"
#include "ui_pinkoodi.h"

Pinkoodi::Pinkoodi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pinkoodi)
{
    //oliot luodaan
    olioSLPinkoodi = new SLPinkoodi;
    olioTervetuloa = new Tervetuloa;
    olioSLDatabase = new SLDatabase;
    olioSLAjastin = new SLAjastin;
    olioKorttifail = new Korttifail;
    olioLukonAvaus = new LukonAvaus;
    olioSLMusa = new SLMusa;
    olioKoodivirhe = new Koodivirhe;
    ui->setupUi(this);

    connect(this, SIGNAL(pinSignal(QString)), this, SLOT(pinSlot(QString)));        //annettu pin-string syötetään pinSlot-funktioon inputtina

    //Timerit
    countdown = new QTimer;
    countdown2 = new QTimer;
    connect(countdown,SIGNAL(timeout()),this,SLOT(timeOut()));
    connect(countdown2,SIGNAL(timeout()),this,SLOT(timeOut2()));

    yritykset = 3;                      //käyttäjällä on kolme yritystä
    countdown2->start(1000);            //kellonajan timer, eli kellonaika haetaan sekunnin välein

    //oikean yläkulman kellonajan esitys
    ui->labelAika->setAlignment(Qt::AlignRight);
    ui->labelKoodiView->setAlignment(Qt::AlignCenter);
    ui->labelAika->setText(olioSLAjastin->Ajastin());

    olioSLDatabase->Tietokanta();       //yhdistys tietokantaan

    this->setWindowState(Qt::WindowFullScreen);
}

//oliot tuhotaan
Pinkoodi::~Pinkoodi()
{
    delete olioSLPinkoodi;
    delete olioTervetuloa;
    delete olioSLDatabase;
    delete olioSLAjastin;
    delete olioKorttifail;
    delete olioLukonAvaus;
    delete olioSLMusa;
    delete olioKoodivirhe;
    delete ui;
}

//tässä päätetään mikä musa soitetaan tultaessa pinkoodi-ikkunaan
void Pinkoodi::playAlkumusa()
{
    if(yritykset == 3)
    {
        olioSLMusa->Tuplaatko();
    }
    else if(yritykset == 2)
    {
        olioSLMusa->Tuplaus();
    }
    else if(yritykset == 1)
    {
        olioSLMusa->TuplausNopea();
    }
}

//tässä määritetään aika, jonka ajan pinkoodi-ikkuna on näkyvissä, ellei jotain nappia paineta. Atm 20 sekuntia voi idlailla
void Pinkoodi::timer_start(int sec)
{
    startMilliseconds = sec * 20;
    countdown->start(startMilliseconds);
}

//jos 20 sekuntia ollaan idle...
void Pinkoodi::timeOut()
{
    oviAuki();
}

//kellonajan päivitys
void Pinkoodi::timeOut2()
{
    ui->labelAika->setAlignment(Qt::AlignRight);
    ui->labelAika->setText(olioSLAjastin->Ajastin());
}

//jos 20 on kulunut
void Pinkoodi::oviAuki()
{
    countdown->stop();                  //timerin pysäytys
    olioSLDatabase->eiKoskettu();       //tietokantapäivitys: oletus (ovesta on kuljettu) -> ovesta ei kuljettu
    olioSLMusa->Sulje();                //musan sulkeminen (kirjastossa pyörivän olion poisto, ks. lisäinfoo lähteestä slmusa.cpp)
    this->close();                      //ikkunan sulkeminen
}

//tässä tulee sitten nappuloiden funktiot.
//nappulat 0-9 lisäävät (append) numeron pin-stringin perään, jolloin pinkoodi alkaa muodostua.
//"sensuuri" toimii samalla tavalla, mutta string koostuu pelkistä tähdistä. Tämä string on asiakkaalle näkyvä osa
//backspace (CLEAR) suorittaa pinresetin, eli stringit "pin" ja "sensuuri" saavat arvon "" (tyhjä). Samalla ikkunassa näkyvät tähdet katoavat
//ENTER-nappia painaessa pin-signaali menee pinSlottiin
void Pinkoodi::on_pushButton_clicked()
{
    pin = pin.append("1");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_2_clicked()
{
    pin = pin.append("2");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_3_clicked()
{
    pin = pin.append("3");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_4_clicked()
{
    pin = pin.append("4");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_5_clicked()
{
    pin = pin.append("5");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_6_clicked()
{
    pin = pin.append("6");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_7_clicked()
{
    pin = pin.append("7");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_8_clicked()
{
    pin = pin.append("8");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_9_clicked()
{
    pin = pin.append("9");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_10_clicked()
{
    pin = pin.append("0");
    sensuuri = sensuuri.append("*");
    ui->labelKoodiView->setText(sensuuri);
    timer_start(1000);
}

void Pinkoodi::on_pushButton_backspace_clicked()
{
    pinreset();
}

void Pinkoodi::pinreset()
{
    pin = "";
    sensuuri = "";
    ui->labelKoodiView->setText(pin);
}

void Pinkoodi::on_pushButton_enter_clicked()
{
    emit pinSignal(pin);
}

//tässä otetaan kortin numero vastaan. Tämän tiedon perusteella tehdään hakuja tietokannasta
void Pinkoodi::korttiLahetys(QString kortti)
{
    kortti2 = kortti;
}

//tässä tapahtuu algoritmit pinkoodin vertaukselle tietokantaan, musan vaihdokset ja siirtymiset oikeisiin ikkunoihin
void Pinkoodi::pinSlot(QString pin)
{
    countdown->stop();                                      //timer seis
    olioSLMusa->Sulje();                                    //musat seis

    //ks. sldatabase.cpp
    korttivertaus = olioSLDatabase->nroF(pin);
    etunimi = olioSLDatabase->etunimiF(kortti2);
    sukunimi = olioSLDatabase->sukunimiF(kortti2);
    aktivointi = olioSLDatabase->aktivointiF(kortti2);
    idkortti = olioSLDatabase->idkorttiF(kortti2);
    asiakas = olioSLDatabase->asiakasF(kortti2);
    koodi = olioSLDatabase->pinF(pin);

        if (pin == koodi && kortti2 == korttivertaus)       //jos koodi ja kortin nro täsmäävät
        {
            countdown->stop();
            yritykset = 3;                                  //yritykset takaisin kolmeen
            this->close();                                  //pinkoodi-ikkuna kiinni
            olioTervetuloa->timer_start(1000);              //Tervetuloa-ikkunan timer käyntiin
            olioTervetuloa->show();                         //Tervetuloa-ikkuna auki
            olioTervetuloa->nimiHaku(etunimi, sukunimi);    //Tervetuloa-ikkuna saa etu- ja sukunimen
            olioTervetuloa->tervetuloaLabel();              //alustavan funktion ajo: musat päälle ja tervehdystekstin näyttö
            olioLukonAvaus->lukkoProsessiHigh();            //lukko auki
            on_pushButton_backspace_clicked();              //pinreset
        }
        else                                                //koodi tai nro väärin
        {
            yritykset--;//yritysten määrän pienennys

            if (yritykset >= 1)                             //yrityksiä jäljellä 1 tai enemmän
            {
                olioKoodivirhe->yrityksetKoppi(yritykset);  //lähettää yritysten määrän Koodivirhe-dialogiin
                olioKoodivirhe->show();                     //näyttää virheilmoituksen
            }
            on_pushButton_backspace_clicked();              //pinreset
            timer_start(1000);                              //timerin uudelleenkäynnistys
        }
        if (yritykset == 2)
        {
            olioSLMusa->Tuplaus();                          //nopeampi musa
        }
        else if (yritykset == 1)
        {
            olioSLMusa->TuplausNopea();                     //vielä nopeampi musa
        }
    if (yritykset == 0)                                     //kaikki kolme yritystä kusi
    {
        yritykset = 3;                                      //yritysten reset
        countdown->stop();                                  //timer seis
        olioKorttifail->playPayne();                        //tunnelmamusa päälle
        olioKorttifail->timer_start(1000);                  //Korttifail-ikkunan timer päälle
        olioKorttifail->show();                             //Korttifail-ikkuna auki
        this->close();                                      //tämä ikkuna kiinni
        olioSLDatabase->aktivointiUpdate(kortti2);          //kortti asetetaan ei-aktiiviseksi
        olioSLDatabase->halyInsert(kortti2);                //annetaan hälytystieto tietokantaan (ja sitä kautta hälytys verkkosivuille)
    }
}
