/********************************************************************************
** Form generated from reading UI file 'pinkoodi.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINKOODI_H
#define UI_PINKOODI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Pinkoodi
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAika;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_10;
    QPushButton *pushButton_enter;
    QLabel *labelKoodiView;

    void setupUi(QDialog *Pinkoodi)
    {
        if (Pinkoodi->objectName().isEmpty())
            Pinkoodi->setObjectName(QStringLiteral("Pinkoodi"));
        Pinkoodi->resize(1244, 858);
        verticalLayout_2 = new QVBoxLayout(Pinkoodi);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelAika = new QLabel(Pinkoodi);
        labelAika->setObjectName(QStringLiteral("labelAika"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelAika->sizePolicy().hasHeightForWidth());
        labelAika->setSizePolicy(sizePolicy);
        labelAika->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelAika->setFont(font);

        verticalLayout_2->addWidget(labelAika);

        label = new QLabel(Pinkoodi);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 53));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(Pinkoodi);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(80);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferDefault);
        pushButton->setFont(font2);
        pushButton->setAutoFillBackground(true);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Pinkoodi);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setFont(font2);
        pushButton_2->setAutoFillBackground(true);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Pinkoodi);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setFont(font2);
        pushButton_3->setAutoFillBackground(true);

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(Pinkoodi);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setFont(font2);
        pushButton_4->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(Pinkoodi);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setFont(font2);
        pushButton_5->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(Pinkoodi);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setFont(font2);
        pushButton_6->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_7 = new QPushButton(Pinkoodi);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setFont(font2);
        pushButton_7->setAutoFillBackground(true);

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(Pinkoodi);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setFont(font2);
        pushButton_8->setAutoFillBackground(true);

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(Pinkoodi);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setFont(font2);
        pushButton_9->setAutoFillBackground(true);

        horizontalLayout_3->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_backspace = new QPushButton(Pinkoodi);
        pushButton_backspace->setObjectName(QStringLiteral("pushButton_backspace"));
        sizePolicy2.setHeightForWidth(pushButton_backspace->sizePolicy().hasHeightForWidth());
        pushButton_backspace->setSizePolicy(sizePolicy2);
        pushButton_backspace->setFont(font2);
        pushButton_backspace->setAutoFillBackground(true);

        horizontalLayout_4->addWidget(pushButton_backspace);

        pushButton_10 = new QPushButton(Pinkoodi);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy2.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy2);
        pushButton_10->setFont(font2);
        pushButton_10->setAutoFillBackground(true);

        horizontalLayout_4->addWidget(pushButton_10);

        pushButton_enter = new QPushButton(Pinkoodi);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));
        sizePolicy1.setHeightForWidth(pushButton_enter->sizePolicy().hasHeightForWidth());
        pushButton_enter->setSizePolicy(sizePolicy1);
        pushButton_enter->setFont(font2);
        pushButton_enter->setAutoFillBackground(true);

        horizontalLayout_4->addWidget(pushButton_enter);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        labelKoodiView = new QLabel(Pinkoodi);
        labelKoodiView->setObjectName(QStringLiteral("labelKoodiView"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelKoodiView->sizePolicy().hasHeightForWidth());
        labelKoodiView->setSizePolicy(sizePolicy3);
        labelKoodiView->setMaximumSize(QSize(16777215, 106));
        QFont font3;
        font3.setPointSize(60);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        labelKoodiView->setFont(font3);
        labelKoodiView->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelKoodiView);

        labelKoodiView->raise();
        labelAika->raise();
        label->raise();

        retranslateUi(Pinkoodi);

        QMetaObject::connectSlotsByName(Pinkoodi);
    } // setupUi

    void retranslateUi(QDialog *Pinkoodi)
    {
        Pinkoodi->setWindowTitle(QApplication::translate("Pinkoodi", "Pinkoodin anto", 0));
        labelAika->setText(QApplication::translate("Pinkoodi", "<html><head/><body><p align=\"right\">12:33:44</p></body></html>", 0));
        label->setText(QApplication::translate("Pinkoodi", "<html><head/><body><p align=\"center\">Sy\303\266t\303\244 pinkoodi</p></body></html>", 0));
        pushButton->setText(QApplication::translate("Pinkoodi", "1", 0));
        pushButton_2->setText(QApplication::translate("Pinkoodi", "2", 0));
        pushButton_3->setText(QApplication::translate("Pinkoodi", "3", 0));
        pushButton_4->setText(QApplication::translate("Pinkoodi", "4", 0));
        pushButton_5->setText(QApplication::translate("Pinkoodi", "5", 0));
        pushButton_6->setText(QApplication::translate("Pinkoodi", "6", 0));
        pushButton_7->setText(QApplication::translate("Pinkoodi", "7", 0));
        pushButton_8->setText(QApplication::translate("Pinkoodi", "8", 0));
        pushButton_9->setText(QApplication::translate("Pinkoodi", "9", 0));
        pushButton_backspace->setText(QApplication::translate("Pinkoodi", "CLEAR", 0));
        pushButton_10->setText(QApplication::translate("Pinkoodi", "0", 0));
        pushButton_enter->setText(QApplication::translate("Pinkoodi", "ENTER", 0));
        labelKoodiView->setText(QApplication::translate("Pinkoodi", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\"><br/></span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Pinkoodi: public Ui_Pinkoodi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODI_H
