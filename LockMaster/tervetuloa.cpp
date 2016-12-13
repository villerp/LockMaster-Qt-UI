#include "tervetuloa.h"
#include "ui_tervetuloa.h"


Tervetuloa::Tervetuloa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tervetuloa)
{
    olioSLDatabase = new SLDatabase;
    ui->setupUi(this);
    countdown = new QTimer(); //Construct the timer
    countdown->setInterval(1000); //One second interval
    countdown->setSingleShot(false); //Multiple shot. This means that the signal timeout will be signed each second
    connect(countdown,SIGNAL(timeout()),this,SLOT(timeOut())); //Connects the timeout signal to my slot timeOut
    aika = "30";
    ui->labelTime->setAlignment(Qt::AlignCenter);
    ui->labelTime->setText(olioSLDatabase->pvm());
    ui->labelAika->setAlignment(Qt::AlignCenter);
    ui->labelAika->setText("<HTML><BODY><p align='center'>"
                                 "<font face = 'verdana'>"+aika+""
                                 "</font></p></BODY></HTML>");
}

void Tervetuloa::timer_start(int sec)
{
    startMilliseconds = sec * 1000;
    countdown->start();
}

Tervetuloa::~Tervetuloa()
{
    delete olioSLDatabase;
    delete ui;
}

void Tervetuloa::on_pushButton_clicked()
{
    countdown->stop();
    this->close();
}

void Tervetuloa::nimiHaku(QString nimi, QString sukunimi)
{
    nimi2 = nimi;
    sukunimi2 = sukunimi;
}

void Tervetuloa::timeOut()
{
    if (startMilliseconds - 1000 >= 0)
    {
        startMilliseconds = startMilliseconds - 1000;
        Seconds = ((startMilliseconds % (1000*60*60)) % (1000*60)) / 1000;
        ui->labelTime->setAlignment(Qt::AlignCenter);
        ui->labelTime->setText(olioSLDatabase->pvm());
        ui->labelAika->setAlignment(Qt::AlignCenter);
        ui->labelAika->setText("<HTML><BODY><p align='center'>"
                               "<font face = 'verdana'>"+QString::number(Seconds+1)+""
                               "</font></p></BODY></HTML>");
    }
    else
    {
        countdown->stop();
        this->close();
    }
}

void Tervetuloa::readData()
{
    summeriprocess = new QProcess(this); //Alustetaan QProcess ääntä ja valoa varten

    ledprocess = new QProcess(this); //Alustetaan QProcess ääntä ja valoa varten

    summeriprocess->setWorkingDirectory("/home/pi/wiringPi-b0a60c3/examples");

    summeriprocess->start("sudo ./softTone");

    summeriprocess->setWorkingDirectory("/home/pi/Documents/Qt Programs/Elektroninen_lukko/build-Lukko-Desktop-Release");

    ledprocess->start("sh blink.sh");

}

void Tervetuloa::tervetuloaLabel()
{
    ui->labelTervetuloa->setText("<HTML><BODY><p align='center'>"
                                 "<font face = 'verdana' size='3'>Tervetuloa "+nimi2+" "+sukunimi2+""
                                 "</font></p></BODY></HTML>");
}
