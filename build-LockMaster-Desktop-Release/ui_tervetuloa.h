/********************************************************************************
** Form generated from reading UI file 'tervetuloa.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERVETULOA_H
#define UI_TERVETULOA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tervetuloa
{
public:
    QLabel *labelAika;
    QPushButton *pushButton;
    QLabel *labelTervetuloa;
    QLabel *labelTime;

    void setupUi(QDialog *Tervetuloa)
    {
        if (Tervetuloa->objectName().isEmpty())
            Tervetuloa->setObjectName(QStringLiteral("Tervetuloa"));
        Tervetuloa->resize(809, 553);
        labelAika = new QLabel(Tervetuloa);
        labelAika->setObjectName(QStringLiteral("labelAika"));
        labelAika->setGeometry(QRect(20, 220, 771, 271));
        QFont font;
        font.setPointSize(150);
        font.setBold(true);
        font.setWeight(75);
        labelAika->setFont(font);
        pushButton = new QPushButton(Tervetuloa);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 510, 101, 31));
        labelTervetuloa = new QLabel(Tervetuloa);
        labelTervetuloa->setObjectName(QStringLiteral("labelTervetuloa"));
        labelTervetuloa->setGeometry(QRect(40, 10, 771, 201));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        labelTervetuloa->setFont(font1);
        labelTime = new QLabel(Tervetuloa);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(730, 10, 69, 35));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        labelTime->setFont(font2);

        retranslateUi(Tervetuloa);

        QMetaObject::connectSlotsByName(Tervetuloa);
    } // setupUi

    void retranslateUi(QDialog *Tervetuloa)
    {
        Tervetuloa->setWindowTitle(QApplication::translate("Tervetuloa", "Dialog", 0));
        labelAika->setText(QApplication::translate("Tervetuloa", "30", 0));
        pushButton->setText(QApplication::translate("Tervetuloa", "Ovi kiinni", 0));
        labelTervetuloa->setText(QApplication::translate("Tervetuloa", "Tervetuloa", 0));
        labelTime->setText(QApplication::translate("Tervetuloa", "20:45", 0));
    } // retranslateUi

};

namespace Ui {
    class Tervetuloa: public Ui_Tervetuloa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERVETULOA_H
