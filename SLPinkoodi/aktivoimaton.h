#ifndef AKTIVOIMATON_H
#define AKTIVOIMATON_H

#include <QDialog>
#include "slmusa.h"

namespace Ui {
class Aktivoimaton;
}

class Aktivoimaton : public QDialog
{
    Q_OBJECT

public:
    explicit Aktivoimaton(QWidget *parent = 0);
    ~Aktivoimaton();
    void Kusahus();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Aktivoimaton *ui;
    SLMusa *olioSLMusa;
};

#endif // AKTIVOIMATON_H
