## AN1310-Qt5

A modified version of the [Microchip's AN1310 bootloader's](http://www.microchip.com/wwwAppNotes/AppNotes.aspx?appnote=en546974) host applications made compilable with Qt5.

Please be aware that this code is under a restrictive license from Microchip. See LICENSE or the header comments in the files for details.

Additional modifications:

 - Added ability to compile the AN1310cl without SQL support. If you
   need a command line bootloader for a specified application supporting a single device you can
   remove the SQLITE+QtSql dependency by setting the SINGLE_DEVICE_SUPPORT to
   "YES" in the AN1310cl.pro and filling out the properties of the
   device in the Bootload/SingleDeviceLoaderData.h file.

TODO:

 - It would be useful to drop the QextSerialport and refactor (and test) with the Qt's builtin QSerialPort library. 
