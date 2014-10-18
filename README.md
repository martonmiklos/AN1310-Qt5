## AN1310-Qt5

A modified version of the [Microchip's AN1310 bootloader's](http://www.microchip.com/wwwAppNotes/AppNotes.aspx?appnote=en546974) host applications made compilable with Qt5.

Additional modifications:

 - Added ability to compile the AN1310cl without SQL support. If you
   need a command line bootloader for a specified application you can
   remove the SQLITE+QtSql dependency by setting the SINGLE_DEVICE_SUPPORT to
   "YES" in the AN1310cl.pro and filling out the properties of the
   device in the Bootload/SingleDeviceLoaderData.h file.

> Written with [StackEdit](https://stackedit.io/).
