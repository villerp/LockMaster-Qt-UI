#-------------------------------------------------
#
# Project created by QtCreator 2016-11-29T12:19:14
#
#-------------------------------------------------

QT       += core gui sql serialport widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LukkoExe
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui



unix:!macx: LIBS += -L$$PWD/../build-SLAjastin-Desktop-Release/ -lSLAjastin

INCLUDEPATH += $$PWD/../SLAjastin
DEPENDPATH += $$PWD/../SLAjastin

unix:!macx: LIBS += -L$$PWD/../build-SLDatabase-Desktop-Release/ -lSLDatabase

INCLUDEPATH += $$PWD/../SLDatabase
DEPENDPATH += $$PWD/../SLDatabase

unix:!macx: LIBS += -L$$PWD/../build-SLPinkoodi-Desktop-Release/ -lSLPinkoodi

INCLUDEPATH += $$PWD/../SLPinkoodi
DEPENDPATH += $$PWD/../SLPinkoodi

unix:!macx: LIBS += -L$$PWD/../build-SLRFID-Desktop-Release/ -lSLRFID

INCLUDEPATH += $$PWD/../SLRFID
DEPENDPATH += $$PWD/../SLRFID

unix:!macx: LIBS += -L$$PWD/../build-LukonAvaus-Desktop-Release/ -lLukonAvaus

INCLUDEPATH += $$PWD/../LukonAvaus
DEPENDPATH += $$PWD/../LukonAvaus



unix:!macx: LIBS += -L$$PWD/../build-SLMusa-Desktop-Release/ -lSLMusa

INCLUDEPATH += $$PWD/../SLMusa
DEPENDPATH += $$PWD/../SLMusa
