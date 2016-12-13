#include "slajastin.h"

//tehdään timer, joka suorittaa slotin "Ajastin()" aina sekunnin välein
SLAjastin::SLAjastin()
{
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(Ajastin()));
    timer->start(1000);
}

//tämä funktio hakee QDateTime-luokan avulla kellonajan ja päivämäärän. Tässä on kuitenkin haluttu vain kellonaika, joka palautetaan lopussa
QString SLAjastin::Ajastin()
{
    QDateTime local(QDateTime::currentDateTime());
    QString pvmaika = local.toString("hh:mm:ss");
    return pvmaika;
}
