#include "korttifail.h"
#include "ui_korttifail.h"

Korttifail::Korttifail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Korttifail)
{
    olioSLAjastin = new SLAjastin;
    timer = new QTimer;
    countdown = new QTimer;
    olioSLMusa = new SLMusa;
    ui->setupUi(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(kello()));
    connect(countdown, SIGNAL(timeout()), this, SLOT(aika()));
    timer->start(1000);     //sekunnin timer

    //kuvien luonti ja sijoittelut
    /*
    QWidget *frame = new QWidget(this);
    QWidget *frame2 = new QWidget(this);
    QWidget *frame3 = new QWidget(this);
    QWidget *frame4 = new QWidget(this);
    QWidget *frame5 = new QWidget(this);
    frame->setGeometry(10, 50, 200, 200);
    frame->setStyleSheet("border-image: url(/home/pi/Documents/Qt_Programs/Elektroninen_lukko/kuvat/denied.jpg)");
    frame2->setGeometry(10, 550, 200, 200);
    frame2->setStyleSheet("border-image: url(/home/pi/Documents/Qt_Programs/Elektroninen_lukko/kuvat/denied.jpg)");
    frame3->setGeometry(990, 50, 200, 200);
    frame3->setStyleSheet("border-image: url(/home/pi/Documents/Qt_Programs/Elektroninen_lukko/kuvat/denied.jpg)");
    frame4->setGeometry(990, 550, 200, 200);
    frame4->setStyleSheet("border-image: url(/home/pi/Documents/Qt_Programs/Elektroninen_lukko/kuvat/denied.jpg)");
    frame5->setGeometry(400, 300, 400, 400);
    frame5->setStyleSheet("border-image: url(/home/pi/Documents/Qt_Programs/Elektroninen_lukko/kuvat/picard.jpg)");
    */
    this->setWindowState(Qt::WindowFullScreen);
}

//tuhot...
Korttifail::~Korttifail()
{
    delete olioSLAjastin;
    delete ui;
}

//kellonajan näyttö
void Korttifail::kello()
{
    ui->label_2->setText(olioSLAjastin->Ajastin());
}

//timerin pituuden määritys
void Korttifail::timer_start(int sec)
{
    startMilliseconds = sec * 32;
    countdown->start(startMilliseconds);
}

//kun määritetty aika (32 sekuntia, koska musan pituus) on kulunut, tämä ajetaan
void Korttifail::aika()
{
    this->close();              //ikkuna kiinni
    countdown->stop();          //kello seis
}
//tunnelmamusa
void Korttifail::playPayne()
{
    olioSLMusa->Payne();
}

//nappia painettaessa...
void Korttifail::on_pushButton_clicked()
{
    olioSLMusa->Sulje();        //musat pois
    this->close();              //ikkuna kiinni
}
