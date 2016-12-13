#-------------------------------------------------
#
# Project created by QtCreator 2016-12-07T08:48:25
#
#-------------------------------------------------

QT       += widgets multimedia

TARGET = SLMusa
TEMPLATE = lib

DEFINES += SLMUSA_LIBRARY

SOURCES += slmusa.cpp

HEADERS += slmusa.h\
        slmusa_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
