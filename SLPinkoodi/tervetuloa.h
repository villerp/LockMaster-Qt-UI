#ifndef TERVETULOA_H
#define TERVETULOA_H

#include <QDialog>
#include <QtGui>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QProcess>
#include "sldatabase.h"
#include "slajastin.h"
#include "lukonavaus.h"
#include "slmusa.h"

namespace Ui {
class Tervetuloa;
}

class Tervetuloa : public QDialog
{
    Q_OBJECT

public:

    explicit Tervetuloa(QWidget *parent = 0);
    ~Tervetuloa();
    void nimiHaku(QString, QString);
    void tervetuloaLabel();
    void timer_start(int);

private slots:

    void on_pushButton_clicked();

protected slots:

    void timeOut();

private:

    Ui::Tervetuloa *ui;
    QTimer *countdown;
    int startMilliseconds, Seconds;
    QString nimi, nimi2, sukunimi2, aika;
    QProcess *summeriprocess;
    QProcess *ledprocess;
    SLDatabase *olioSLDatabase;
    SLAjastin *olioSLAjastin;
    LukonAvaus *olioLukonAvaus;
    SLMusa *olioSLMusa;
};




#endif // TERVETULOA_H
