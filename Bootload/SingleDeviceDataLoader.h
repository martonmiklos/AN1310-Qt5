#ifndef SINGELDEVICELOADER_H
#define SINGELDEVICELOADER_H

#include <QList>

#include "DeviceDataLoader.h"

class SingleDeviceDataLoader
{
public:
    SingleDeviceDataLoader();
    DeviceDataLoader::ErrorCode loadDevice(Device* device, int deviceId, Device::Families familyId);
    DeviceDataLoader::ErrorCode loadDevice(Device* device, QString partName);

    QStringList findDevices(QString partName);
private:
    static const QString m_partName;
    static const int m_deviceId;
    static const Device::Families m_familyId;

    static const int m_writeBlockSizeFLASH;
    static const unsigned int m_eraseBlockSizeFLASH;

    static const unsigned int m_startFLASH;
    static const unsigned int m_endFLASH;

    static const unsigned int m_startEEPROM;
    static const unsigned int m_endEEPROM;

    static const unsigned int m_startUser;
    static const unsigned int m_endUser;

    static const unsigned int m_startConfig;
    static const unsigned int m_endConfig;

    static const unsigned int m_startGPR;
    static const unsigned int m_endGPR;

    static const unsigned int m_startDeviceId;
    static const unsigned int m_endDeviceId;

    static const int m_bytesPerWordFLASH;

    static const QList<Device::ConfigWord> m_configWords;

};

#endif // SINGELDEVICELOADER_H
