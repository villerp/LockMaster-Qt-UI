#-------------------------------------------------
#
# Project created by QtCreator 2016-11-16T08:35:02
#
#-------------------------------------------------

QT       += widgets sql serialport gui

TARGET = SLDatabase
TEMPLATE = lib

DEFINES += SLDATABASE_LIBRARY

SOURCES += sldatabase.cpp

HEADERS += sldatabase.h\
        sldatabase_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
