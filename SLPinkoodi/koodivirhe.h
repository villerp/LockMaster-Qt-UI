#ifndef KOODIVIRHE_H
#define KOODIVIRHE_H

#include <QDialog>
#include <QString>
#include "slmusa.h"

namespace Ui {
class Koodivirhe;
}

class Koodivirhe : public QDialog
{
    Q_OBJECT

public:
    explicit Koodivirhe(QWidget *parent = 0);
    ~Koodivirhe();
    void yrityksetKoppi(int);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Koodivirhe *ui;
    int yritykset;
    SLMusa *olioSLMusa;
};

#endif // KOODIVIRHE_H
