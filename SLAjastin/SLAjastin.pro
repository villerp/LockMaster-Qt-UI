#-------------------------------------------------
#
# Project created by QtCreator 2016-11-29T13:31:37
#
#-------------------------------------------------

QT       += widgets

TARGET = SLAjastin
TEMPLATE = lib

DEFINES += SLAJASTIN_LIBRARY

SOURCES += slajastin.cpp

HEADERS += slajastin.h\
        slajastin_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
