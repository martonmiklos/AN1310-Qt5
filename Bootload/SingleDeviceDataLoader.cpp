#include "SingleDeviceDataLoader.h"
#include "SingleDeviceDataLoaderData.h"

DeviceDataLoader::ErrorCode SingleDeviceDataLoader::loadDevice(Device *device, QString partName)
{
    device->setUnknown();

    if (partName != m_partName)
        return DeviceDataLoader::DeviceMissing;

    return loadDevice(device, m_deviceId, m_familyId);
}

DeviceDataLoader::ErrorCode SingleDeviceDataLoader::loadDevice(Device *device, int deviceId, Device::Families familyId)
{
    if (deviceId != m_deviceId || familyId != m_familyId)
        return DeviceDataLoader::DeviceMissing;

    device->name = m_partName;
    device->writeBlockSizeFLASH = m_writeBlockSizeFLASH;
    device->eraseBlockSizeFLASH = m_eraseBlockSizeFLASH;
    device->startFLASH  = m_startFLASH;
    device->endFLASH    = m_endFLASH;
    device->startEEPROM = m_startEEPROM;
    device->endEEPROM   = m_endEEPROM;
    device->startUser   = m_startUser;
    device->endUser     = m_endUser;
    device->startConfig = m_startConfig;
    device->endConfig   = m_endConfig;
    device->startGPR    = m_startGPR;
    device->endGPR      = m_endGPR;
    device->bytesPerWordFLASH = m_bytesPerWordFLASH;
    device->family = m_familyId;

    switch(m_familyId)
    {
    case Device::PIC16:
        device->bytesPerAddressFLASH = 2;
        device->bytesPerWordEEPROM = 1;
        device->flashWordMask = 0x3FFF;
        device->configWordMask = 0xFF;
        break;

    case Device::PIC24:
        device->bytesPerAddressFLASH = 2;
        device->bytesPerWordEEPROM = 2;
        device->flashWordMask = 0xFFFFFF;
        device->configWordMask = 0xFFFF;
        device->writeBlockSizeFLASH *= 2;       // temporary
        device->eraseBlockSizeFLASH *= 2;
        break;

    case Device::PIC32:
        device->flashWordMask = 0xFFFFFFFF;
        device->configWordMask = 0xFFFFFFFF;
        device->bytesPerAddressFLASH = 1;
        break;

    case Device::PIC18:
    default:
        device->flashWordMask = 0xFFFF;
        device->configWordMask = 0xFF;
        device->bytesPerAddressFLASH = 1;
        device->bytesPerWordEEPROM = 1;
    }

    foreach (Device::ConfigWord config, m_configWords) {
        device->configWords.append(config);
    }

    return DeviceDataLoader::Success;
}


QStringList SingleDeviceDataLoader::findDevices(QString partName)
{
    QStringList results;
    if (partName == m_partName)
        return QStringList(m_partName);

    return results;
}
