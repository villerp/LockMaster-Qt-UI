/********************************************************************************
** Form generated from reading UI file 'aktivoimaton.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AKTIVOIMATON_H
#define UI_AKTIVOIMATON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Aktivoimaton
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Aktivoimaton)
    {
        if (Aktivoimaton->objectName().isEmpty())
            Aktivoimaton->setObjectName(QStringLiteral("Aktivoimaton"));
        Aktivoimaton->resize(1000, 800);
        gridLayout = new QGridLayout(Aktivoimaton);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Aktivoimaton);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(35);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(Aktivoimaton);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(16777215, 300));
        QFont font1;
        font1.setPointSize(70);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(Aktivoimaton);

        QMetaObject::connectSlotsByName(Aktivoimaton);
    } // setupUi

    void retranslateUi(QDialog *Aktivoimaton)
    {
        Aktivoimaton->setWindowTitle(QApplication::translate("Aktivoimaton", "Dialog", 0));
        label->setText(QApplication::translate("Aktivoimaton", "<html><head/><body><p align=\"center\">Korttia ei ole aktivoitu. Ota yhteys valvojaan.</p></body></html>", 0));
        pushButton->setText(QApplication::translate("Aktivoimaton", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class Aktivoimaton: public Ui_Aktivoimaton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AKTIVOIMATON_H
