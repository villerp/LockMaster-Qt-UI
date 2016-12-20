/********************************************************************************
** Form generated from reading UI file 'koodivirhe.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOODIVIRHE_H
#define UI_KOODIVIRHE_H

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

class Ui_Koodivirhe
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Koodivirhe)
    {
        if (Koodivirhe->objectName().isEmpty())
            Koodivirhe->setObjectName(QStringLiteral("Koodivirhe"));
        Koodivirhe->resize(1137, 802);
        gridLayout = new QGridLayout(Koodivirhe);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Koodivirhe);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(300, 300));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8("../kuvat/denied.jpg")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 2, 1, 1, 1);

        label_3 = new QLabel(Koodivirhe);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 300));
        QFont font1;
        font1.setPointSize(38);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        label_2 = new QLabel(Koodivirhe);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 200));
        QFont font2;
        font2.setPointSize(41);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        label_4 = new QLabel(Koodivirhe);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(500, 500));
        QFont font3;
        font3.setPointSize(204);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);

        gridLayout->addWidget(label_4, 2, 3, 1, 1);

        pushButton = new QPushButton(Koodivirhe);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(500, 500));
        QFont font4;
        font4.setPointSize(92);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton->setFont(font4);

        gridLayout->addWidget(pushButton, 3, 2, 1, 1);


        retranslateUi(Koodivirhe);

        QMetaObject::connectSlotsByName(Koodivirhe);
    } // setupUi

    void retranslateUi(QDialog *Koodivirhe)
    {
        Koodivirhe->setWindowTitle(QApplication::translate("Koodivirhe", "Dialog", 0));
        label->setText(QString());
        label_3->setText(QApplication::translate("Koodivirhe", "Yrityksi\303\244 j\303\244ljell\303\244:", 0));
        label_2->setText(QApplication::translate("Koodivirhe", "<html><head/><body><p align=\"center\">Koodi v\303\244\303\244rin!</p></body></html>", 0));
        label_4->setText(QApplication::translate("Koodivirhe", "<html><head/><body><p align=\"center\">2</p></body></html>", 0));
        pushButton->setText(QApplication::translate("Koodivirhe", "Sulje", 0));
    } // retranslateUi

};

namespace Ui {
    class Koodivirhe: public Ui_Koodivirhe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOODIVIRHE_H
