#ifndef KORTTIFAIL_H
#define KORTTIFAIL_H

#include <QDialog>
#include <slajastin.h>
#include <QtGui>
#include "slajastin.h"
#include <QString>
#include <QDebug>
#include "slmusa.h"

namespace Ui {
class Korttifail;
}

class Korttifail : public QDialog
{
    Q_OBJECT

public:

    explicit Korttifail(QWidget *parent = 0);
    ~Korttifail();
    void timer_start(int);
    void playPayne();

private slots:

    void kello();
    void aika();
    void on_pushButton_clicked();

private:

    Ui::Korttifail *ui;
    SLAjastin *olioSLAjastin;
    QTimer *timer, *countdown;
    int startMilliseconds;
    SLMusa *olioSLMusa;
};

#endif // KORTTIFAIL_H
