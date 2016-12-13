#-------------------------------------------------
#
# Project created by QtCreator 2016-11-28T13:49:18
#
#-------------------------------------------------

QT       += core gui sql serialport widgets

TARGET = SLPinkoodi
TEMPLATE = lib

DEFINES += SLPINKOODI_LIBRARY

SOURCES += slpinkoodi.cpp \
    pinkoodi.cpp \
    tervetuloa.cpp \
    korttifail.cpp

HEADERS += slpinkoodi.h\
        slpinkoodi_global.h \
    pinkoodi.h \
    tervetuloa.h \
    korttifail.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    pinkoodi.ui \
    tervetuloa.ui \
    korttifail.ui

unix:!macx: LIBS += -L$$PWD/../build-SLDatabase-Desktop-Release/ -lSLDatabase

INCLUDEPATH += $$PWD/../SLDatabase
DEPENDPATH += $$PWD/../SLDatabase

unix:!macx: LIBS += -L$$PWD/../build-SLAjastin-Desktop-Release/ -lSLAjastin

INCLUDEPATH += $$PWD/../SLAjastin
DEPENDPATH += $$PWD/../SLAjastin

unix:!macx: LIBS += -L$$PWD/../build-SLRFID-Desktop-Release/ -lSLRFID

INCLUDEPATH += $$PWD/../SLRFID
DEPENDPATH += $$PWD/../SLRFID

unix:!macx: LIBS += -L$$PWD/../build-LukonAvaus-Desktop-Release/ -lLukonAvaus

INCLUDEPATH += $$PWD/../LukonAvaus
DEPENDPATH += $$PWD/../LukonAvaus

unix:!macx: LIBS += -L$$PWD/../build-SLMusa-Desktop-Release/ -lSLMusa

INCLUDEPATH += $$PWD/../SLMusa
DEPENDPATH += $$PWD/../SLMusa
