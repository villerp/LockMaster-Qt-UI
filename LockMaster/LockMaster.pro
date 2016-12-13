#-------------------------------------------------
#
# Project created by QtCreator 2016-11-24T02:55:23
#
#-------------------------------------------------

QT       += core gui sql serialport widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LockMaster
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pinkoodi.cpp \
    tervetuloa.cpp \
    korttifail.cpp

HEADERS  += mainwindow.h \
    pinkoodi.h \
    tervetuloa.h \
    korttifail.h

FORMS    += mainwindow.ui \
    pinkoodi.ui \
    tervetuloa.ui \
    korttifail.ui


unix:!macx: LIBS += -L$$PWD/../build-SLDatabase-Desktop-Release/ -lSLDatabase

INCLUDEPATH += $$PWD/../SLDatabase
DEPENDPATH += $$PWD/../SLDatabase

unix:!macx: LIBS += -L$$PWD/../build-SLPinkoodi-Desktop-Release/ -lSLPinkoodi

INCLUDEPATH += $$PWD/../SLPinkoodi
DEPENDPATH += $$PWD/../SLPinkoodi
