#ifndef SLAJASTIN_H
#define SLAJASTIN_H

#include "slajastin_global.h"
#include <QtGui>
#include <QDateTime>
#include <QTimerEvent>
#include <QDebug>
#include <QtCore>

class SLAJASTINSHARED_EXPORT SLAjastin : public QObject
{
    Q_OBJECT

public:
    SLAjastin();
    QTimer *timer;

public slots:
    virtual QString Ajastin();

};

#endif // SLAJASTIN_H
