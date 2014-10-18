#ifndef DEVICEDATALOADER_H
#define DEVICEDATALOADER_H

#include <QString>
#include "Device.h"

class DeviceDataLoader
{
public:
    DeviceDataLoader();

    enum ErrorCode
    {
        Success = 0, DatabaseMissing, DeviceMissing
    };

    virtual DeviceDataLoader::ErrorCode loadDevice(Device* device, int deviceId, Device::Families familyId) = 0;
    virtual DeviceDataLoader::ErrorCode loadDevice(Device* device, QString partName) = 0;

    virtual QStringList findDevices(QString query) = 0;

};

#endif // DEVICEDATALOADER_H
