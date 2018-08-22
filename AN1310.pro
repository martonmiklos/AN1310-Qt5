TEMPLATE  = subdirs
CONFIG   += ordered

SUBDIRS = \
    QextSerialPort \
    Bootload \
    AN1310cl \
    AN1310ui

Bootload.depends = QextSerialPort
AN1310ui.depends = Bootload
AN1310cl.depends = Bootload
