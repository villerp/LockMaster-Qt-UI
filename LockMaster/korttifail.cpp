#include "korttifail.h"
#include "ui_korttifail.h"

Korttifail::Korttifail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Korttifail)
{
    ui->setupUi(this);
}

Korttifail::~Korttifail()
{
    delete ui;
}
