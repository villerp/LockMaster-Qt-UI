#-------------------------------------------------
#
# Project created by QtCreator 2016-11-30T11:27:28
#
#-------------------------------------------------

QT       += widgets serialport

TARGET = SLRFID
TEMPLATE = lib

DEFINES += SLRFID_LIBRARY

SOURCES += slrfid.cpp

HEADERS += slrfid.h\
        slrfid_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
