#ifndef KORTTIFAIL_H
#define KORTTIFAIL_H

#include <QDialog>

namespace Ui {
class Korttifail;
}

class Korttifail : public QDialog
{
    Q_OBJECT

public:
    explicit Korttifail(QWidget *parent = 0);
    ~Korttifail();

private:
    Ui::Korttifail *ui;
};

#endif // KORTTIFAIL_H
