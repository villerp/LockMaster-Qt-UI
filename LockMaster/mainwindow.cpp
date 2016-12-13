#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRect>
#include <QDesktopWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    olioPinkoodi = new Pinkoodi;
    olioTervetuloa = new Tervetuloa;
    olioSLDatabase = new SLDatabase;
    ui->setupUi(this);
    QRect position = frameGeometry();
    position.moveCenter(QDesktopWidget().availableGeometry().center());
    move(position.topLeft());

    connect(this, SIGNAL(korttiSignal(QString)), this, SLOT(korttiSlot(QString)));


    //KESKEN

    serial=new QSerialPort;
    connect(serial, SIGNAL(readyRead()), this, SLOT(readData()));
    //olioSLDatabase->serialOpen();


    //KESKEN

    countdown = new QTimer();
    countdown->setInterval(1000);
    countdown->setSingleShot(false);
    connect(countdown,SIGNAL(timeout()),this,SLOT(timeOut()));


    startMilliseconds = 1000;
    countdown->start();
    //kortti = "90049DF6A";
    kortti = "8";
    emit korttiSignal(kortti);


    ui->label->setText(olioSLDatabase->pvm());
}



MainWindow::~MainWindow()
{
    delete olioPinkoodi;
    delete olioTervetuloa;
    delete olioSLDatabase;
    serial->close();
    delete serial;
    delete ui;
}

void MainWindow::timeOut()
{
    if (startMilliseconds - 1000 >= 0)
    {
        startMilliseconds = startMilliseconds - 1000;
        ui->label->setText(olioSLDatabase->pvm());
        QString aika = olioSLDatabase->pvm();
        aika.resize(2);
        tunnit = aika.toInt();
        tunnit = 19;
    }
    else
    {
        startMilliseconds = 1000;
        countdown->start();
    }
}

void MainWindow::readData()
{
    QString data = serial->readAll();
    QString kortti = data.right(12);
    kortti.resize(9);
    emit korttiSignal(kortti);
}

void MainWindow::korttiSlot(QString kortti)
{
    olioPinkoodi->korttiLahetys(kortti);
    olioSLDatabase->Tietokanta();
    korttivertaus = olioSLDatabase->korttiF(kortti);
    etunimi = olioSLDatabase->etunimiF(kortti);
    sukunimi = olioSLDatabase->sukunimiF(kortti);
    aktivointi = olioSLDatabase->aktivointiF(kortti);
    idkortti = olioSLDatabase->idkorttiF(kortti);
    asiakas = olioSLDatabase->asiakasF(kortti);
    qDebug () << korttivertaus << etunimi << sukunimi << aktivointi << idkortti << asiakas;

    if (kortti == korttivertaus)
    {
        if (aktivointi == "0")
        {
            QMessageBox::information(this, tr("Tiedotus"), tr("Korttia ei ole aktivoitu. Ota yhteys valvojaan."));
            olioSLDatabase->kulkuF(kortti, asiakas, 0);
        }
        else
        {
            if(tunnit < 6 || tunnit >= 18)
            {
                olioSLDatabase->kulkuF(kortti, asiakas, 1);
                olioPinkoodi->show();
                olioPinkoodi->timer_start(10);
            }
            else
            {
                olioSLDatabase->kulkuF(kortti, asiakas, 1);
                olioTervetuloa->timer_start(30);
                olioTervetuloa->show();
                olioTervetuloa->nimiHaku(etunimi, sukunimi);
                //olioTervetuloa->readData();
                olioTervetuloa->tervetuloaLabel();
            }
        }
    }
    olioSLDatabase->kulkuF(kortti, asiakas, 1);
    olioSLDatabase->korttiNrolisays(kortti);
}
