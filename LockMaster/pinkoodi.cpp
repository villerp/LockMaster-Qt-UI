#include "pinkoodi.h"
#include "ui_pinkoodi.h"
#include <QMessageBox>

Pinkoodi::Pinkoodi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pinkoodi)
{
    olioSLDatabase = new SLDatabase;
    olioSLPinkoodi = new SLPinkoodi;
    olioKorttifail = new Korttifail;
    olioTervetuloa = new Tervetuloa;
    ui->setupUi(this);
    connect(this, SIGNAL(pinSignal(QString)), this, SLOT(pinSlot(QString)));

    //KESKEN

    countdown = new QTimer(); //Construct the timer
    countdown->setInterval(1000); //One second interval
    countdown->setSingleShot(false); //Multiple shot. This means that the signal timeout will be signed each second
    connect(countdown,SIGNAL(timeout()),this,SLOT(timeOut())); //Connects the timeout signal to my slot timeOut

    yritykset = 3;
}

void Pinkoodi::timer_start(int sec)
{
    startMilliseconds = sec * 1000;
    countdown->start();
}

Pinkoodi::~Pinkoodi()
{
    delete olioKorttifail;
    delete olioTervetuloa;
    delete olioSLDatabase;
    delete olioSLPinkoodi;
    delete ui;
}

void Pinkoodi::timeOut()
{

    if (startMilliseconds - 1000 >= 0)
    {
        startMilliseconds = startMilliseconds - 1000;
        ui->labelAika->setText(olioSLDatabase->pvm());
    }
    else
    {
        oviAuki();        
    }
}

void Pinkoodi::oviAuki()
{
    olioSLDatabase->Tietokanta();
    olioSLDatabase->eiKoskettu();
    countdown->stop();
    this->close();
}

void Pinkoodi::on_pushButton_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi1(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_2_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi2(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_3_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi3(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_4_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi4(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_5_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi5(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_6_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi6(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_7_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi7(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_8_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi8(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_9_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi9(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_10_clicked()
{
    sensuuri = sensuuri.append("*");
    pin = olioSLPinkoodi->nappi10(pin);
    ui->labelKoodiView->setText(sensuuri);
    timer_start(10);
}

void Pinkoodi::on_pushButton_backspace_clicked()
{
    pin = olioSLPinkoodi->pinreset();
    sensuuri = "";
    ui->labelKoodiView->setText("");
    timer_start(10);
}

void Pinkoodi::on_pushButton_enter_clicked()
{
    emit pinSignal(pin);
}

void Pinkoodi::korttiLahetys(QString kortti)
{
    kortti2 = kortti;
}

void Pinkoodi::pinSlot(QString)
{
    countdown->stop();
    olioSLDatabase->Tietokanta();
    korttivertaus = olioSLDatabase->korttiF(kortti2);
    etunimi = olioSLDatabase->etunimiF(kortti2);
    sukunimi = olioSLDatabase->sukunimiF(kortti2);
    aktivointi = olioSLDatabase->aktivointiF(kortti2);
    idkortti = olioSLDatabase->idkorttiF(kortti2);
    asiakas = olioSLDatabase->asiakasF(kortti2);
    koodi = olioSLDatabase->pinF(pin);

    qDebug () << korttivertaus << etunimi << sukunimi << aktivointi << idkortti << asiakas << pin << koodi << kortti2;

        if (pin == koodi && kortti2 == korttivertaus)
        {
            yritykset = 3;
            this->close();           
            olioTervetuloa->timer_start(30);
            //olioTervetuloa->readData();

            olioTervetuloa->show();
            olioTervetuloa->nimiHaku(etunimi, sukunimi);
            olioTervetuloa->tervetuloaLabel();
            on_pushButton_backspace_clicked();
        }
        else
        {
            yritykset--;
            if (yritykset >= 1)
            {
                QString tiedotus = QString("Pinkoodi väärin, yrityksiä jäljellä: %1").arg(yritykset);
                QMessageBox::critical(this, tr("Virhe"),tiedotus);
            }
            on_pushButton_backspace_clicked();
            timer_start(10);
        }
    if (yritykset == 0)
    {
        yritykset = 1;
        this->close();
        olioKorttifail->show();
        olioSLDatabase->aktivointiUpdate(kortti2);
        olioSLDatabase->halyInsert(kortti2);
    }
}

