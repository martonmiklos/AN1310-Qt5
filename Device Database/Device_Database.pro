# -------------------------------------------------
# Project created by QtCreator 2009-04-22T11:17:17
# -------------------------------------------------
TARGET = Device_Database
TEMPLATE = app

OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
RCC_DIR=build

DESTDIR = bin

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += widgets gui
}

SOURCES += main.cpp \
    DeviceWindow.cpp \
    DeviceXmlLoader.cpp \
    ../Bootload/Device.cpp
HEADERS += DeviceWindow.h \
    DeviceXmlLoader.h \
    ../Bootload/Device.h
win32 { 
    RC_FILE = windows.rc
    QMAKE_CXXFLAGS_RELEASE = -Os
}
FORMS += DeviceWindow.ui
RESOURCES += resources.qrc
OTHER_FILES += devices.sql \
    windows.rc
