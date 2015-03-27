# -------------------------------------------------
# Project created by QtCreator 2010-08-02T17:44:13
# -------------------------------------------------

QT -= gui
QT += sql

TARGET = AN1310cl
CONFIG += console
CONFIG -= app_bundle

# setting this variable to 1 will remove the
# QtSql dependency, and only one device will be supported which properties are
# present in the Bootload/SingleDeviceLoaderData.h file
SINGLE_DEVICE_SUPPORT = "YES"

contains(SINGLE_DEVICE_SUPPORT, "YES") {
    QT -= sql
    DEFINES += SINGLE_DEVICE_SUPPORT
}

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


OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
RCC_DIR=build

DESTDIR = bin

unix {
    #VARIABLES
    isEmpty(PREFIX) {
    PREFIX = /usr
    }
    BINDIR = $$PREFIX/bin
    DATADIR =$$PREFIX/share

    DEFINES += DATADIR=\\\"$$DATADIR\\\" PKGDATADIR=\\\"$$PKGDATADIR\\\"

    #MAKE INSTALL

    INSTALLS += target

    target.path =$$BINDIR
}
