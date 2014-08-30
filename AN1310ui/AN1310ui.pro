TARGET = "AN1310ui"
TEMPLATE = app
QT += sql gui
QMAKE_CXXFLAGS_RELEASE = -Os
INCLUDEPATH += ../

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += widgets
}

OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
RCC_DIR=build

DESTDIR = bin

SOURCES += main.cpp \
    MainWindow.cpp \
    Settings.cpp \
    FlashViewModel.cpp \
    EepromViewModel.cpp \
    QSerialTerminal.cpp \
    ConfigBitsItem.cpp \
    ConfigBitsDelegate.cpp \
    ConfigBitsView.cpp \
    HexExporter.cpp
HEADERS += MainWindow.h \
    Settings.h \
    FlashViewModel.h \
    EepromViewModel.h \
    QSerialTerminal.h \
    ConfigBitsItem.h \
    ConfigBitsDelegate.h \
    ConfigBitsView.h \
    ../version.h \
    HexExporter.h
unix { 
    DEFINES += _TTY_POSIX_
}

win32 { 
    DEFINES += _TTY_WIN_
    LIBS += -lsetupapi
    RC_FILE = windows.rc
}

LIBS += -L../QextSerialPort/bin
LIBS += -L../Bootload/bin

LIBS += -lBootload \
    -lQextSerialPort

FORMS += MainWindow.ui \
    Settings.ui
RESOURCES += resources.qrc
OTHER_FILES += windows.rc
