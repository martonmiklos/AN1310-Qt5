# -------------------------------------------------
# Project created by QtCreator 2010-08-02T17:44:13
# -------------------------------------------------
QT += sql
QT -= gui
TARGET = AN1310cl
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app
QMAKE_CXXFLAGS_RELEASE = -Os
INCLUDEPATH += ../
SOURCES += main.cpp \
    Bootload.cpp

unix {
    DEFINES += _TTY_POSIX_
}

win32 { 
    DEFINES += _TTY_WIN_
    LIBS += -lsetupapi
}

LIBS += -L../QextSerialPort/bin
LIBS += -L../Bootload/bin

LIBS += -lBootload \
    -lQextSerialPort
HEADERS += Bootload.h
