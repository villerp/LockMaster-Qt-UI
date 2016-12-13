#ifndef SLRFID_H
#define SLRFID_H

#include "slrfid_global.h"
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QtCore/QtGlobal>
#include <QString>
#include <QObject>

class SLRFIDSHARED_EXPORT SLRFID : public QObject
{
    Q_OBJECT

public:

    SLRFID();
    ~SLRFID();
    QString RFID();
    void SerialAlustus();
    QString data;


private:

    QSerialPort *serialAlku;


signals:

    void canRead();


private slots:

    void canReadSlot();
};

#endif // SLRFID_H
