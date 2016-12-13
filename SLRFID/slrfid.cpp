#include "slrfid.h"

//muodostinfunktio, eli ensimmäisenä tehtävät jutut
SLRFID::SLRFID()
{
   serialAlku = new QSerialPort;
   connect(serialAlku, SIGNAL(readyRead()), this, SLOT(canReadSlot()));
   SerialAlustus();         //alustetaan serial-yhteys
}

//tuhoajafunktio
SLRFID::~SLRFID()
{
    serialAlku->close();        //serial suljetaan
    delete serialAlku;

}

//suoritetaan muodostettaessa luokkaa. Nämä on kopioitu verkon esimerkeistä
void SLRFID::SerialAlustus()
{
    serialAlku->setPortName("/dev/ttyACM0");
    serialAlku->setBaudRate(QSerialPort::Baud9600);
    serialAlku->setDataBits(QSerialPort::Data8);
    serialAlku->setParity(QSerialPort::NoParity);
    serialAlku->setStopBits(QSerialPort::OneStop);
    serialAlku->setFlowControl(QSerialPort::HardwareControl);
    serialAlku->open(QIODevice::ReadWrite);
}

//tämä slot lukee rfid-lukijaa ja emittoi datan
void SLRFID::canReadSlot()
{
     data = serialAlku->readAll();
     emit this->canRead();
}

//RFID() palauttaa muokatun datan (string)
QString SLRFID::RFID()
{
    return data.mid(3,10);
}

