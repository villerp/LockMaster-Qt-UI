/********************************************************************************
** Form generated from reading UI file 'korttifail.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KORTTIFAIL_H
#define UI_KORTTIFAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Korttifail
{
public:

    void setupUi(QDialog *Korttifail)
    {
        if (Korttifail->objectName().isEmpty())
            Korttifail->setObjectName(QStringLiteral("Korttifail"));
        Korttifail->resize(400, 300);

        retranslateUi(Korttifail);

        QMetaObject::connectSlotsByName(Korttifail);
    } // setupUi

    void retranslateUi(QDialog *Korttifail)
    {
        Korttifail->setWindowTitle(QApplication::translate("Korttifail", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Korttifail: public Ui_Korttifail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KORTTIFAIL_H
