#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T14:12:00
#
#-------------------------------------------------

QT       += widgets

TARGET = LukonAvaus
TEMPLATE = lib

DEFINES += LUKONAVAUS_LIBRARY

SOURCES += lukonavaus.cpp

HEADERS += lukonavaus.h\
        lukonavaus_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
