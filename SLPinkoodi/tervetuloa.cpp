#include "tervetuloa.h"
#include "ui_tervetuloa.h"


Tervetuloa::Tervetuloa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tervetuloa)
{
    olioSLDatabase = new SLDatabase;
    olioSLAjastin = new SLAjastin;
    olioLukonAvaus = new LukonAvaus;
    olioSLMusa = new SLMusa;
    ui->setupUi(this);
    countdown = new QTimer();
    connect(countdown,SIGNAL(timeout()),this,SLOT(timeOut()));

    //kellonajan alustava sijoitus ja esitys
    ui->labelTime->setAlignment(Qt::AlignRight);
    ui->labelTime->setText(olioSLAjastin->Ajastin());

    Seconds = 30;       //aika (s), jonka kuluttua viimeistään lukko menee takaisin lukkoon.

    this->setWindowState(Qt::WindowFullScreen);
}

//tuhot...
Tervetuloa::~Tervetuloa()
{
    olioLukonAvaus->lukkoProsessiLow();     //ovi lukkoon
    delete olioSLMusa;
    delete olioSLDatabase;
    delete ui;
}

//tämä aktivoi timerin
void Tervetuloa::timer_start(int x)
{
    countdown->start(x);
    Seconds = 30;
}

//nappia painettaessa (oven sulkeuduttua)
void Tervetuloa::on_pushButton_clicked()
{
    countdown->stop();                      //timer seis
    this->close();                          //ikkuna kiinni
    olioSLMusa->Sulje();                    //musat pois
    olioLukonAvaus->lukkoProsessiLow();     //lukko kiinni
}

//otetaan etu- ja sukunimi vastaan
void Tervetuloa::nimiHaku(QString nimi, QString sukunimi)
{
    nimi2 = nimi;
    sukunimi2 = sukunimi;
}

//aina sekuntin (1000ms) kuluttua
void Tervetuloa::timeOut()
{
    Seconds--;      //muuttujan pienennys

    //kellonajan päivitys
    ui->labelTime->setAlignment(Qt::AlignRight);
    ui->labelTime->setText(olioSLAjastin->Ajastin());

    //tekstiä
    ui->labelAvaukseen->setAlignment(Qt::AlignCenter);
    ui->labelAvaukseen->setText("<HTML><BODY><p align='center'>"
                                 "<font face = 'verdana' size='3'>Aikaa lukon sulkeutumiseen:"
                                 "</font></p></BODY></HTML>");

    //sekuntien tulostus
    ui->labelAika->setAlignment(Qt::AlignCenter);
    ui->labelAika->setText("<HTML><BODY><p align='center'>"
                               "<font face = 'verdana'>"+QString::number(Seconds)+""
                               "</font></p></BODY></HTML>");

    if (Seconds == 0)                               //aika loppu
    {
        countdown->stop();                          //timer seis
        this->close();                              //ikkuna kiinni
        olioLukonAvaus->lukkoProsessiLow();         //lukko kiinni
    }
}

//funktio, joka ajetaan ensimmäisenä ikkunan auetessa
void Tervetuloa::tervetuloaLabel()
{
    olioSLMusa->Countdown();        //tunnelmamusa

    //tervehdys
    ui->labelTervetuloa->setText("<HTML><BODY><p align='center'>"
                                 "<font face = 'verdana' size='4'>Tervetuloa "+nimi2+" "+sukunimi2+""
                                 "</font></p></BODY></HTML>");

    //tekstiä
    ui->labelAvaukseen->setAlignment(Qt::AlignCenter);
    ui->labelAvaukseen->setText("<HTML><BODY><p align='center'>"
                                 "<font face = 'verdana' size='3'>Aikaa lukon sulkeutumiseen:"
                                 "</font></p></BODY></HTML>");

    //aikaa
    ui->labelAika->setAlignment(Qt::AlignCenter);
    ui->labelAika->setText("<HTML><BODY><p align='center'>"
                               "<font face = 'verdana'>"+QString::number(Seconds)+""
                               "</font></p></BODY></HTML>");
}
