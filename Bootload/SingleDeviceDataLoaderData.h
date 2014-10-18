#ifndef SINGLEDEVICELOADERDATA_H
#define SINGLEDEVICELOADERDATA_H

#include "SingleDeviceDataLoader.h"

const QString SingleDeviceDataLoader::m_partName = "PIC18F8622";
const int SingleDeviceDataLoader::m_deviceId = 157;
const Device::Families SingleDeviceDataLoader::m_familyId = Device::PIC18;

const int SingleDeviceDataLoader::m_writeBlockSizeFLASH = 64;
const unsigned int SingleDeviceDataLoader::m_eraseBlockSizeFLASH = 64;

const unsigned int SingleDeviceDataLoader::m_startFLASH = 0;
const unsigned int SingleDeviceDataLoader::m_endFLASH = 65536;

const unsigned int SingleDeviceDataLoader::m_startEEPROM = 15728640;
const unsigned int SingleDeviceDataLoader::m_endEEPROM = 15729664;

const unsigned int SingleDeviceDataLoader::m_startUser = 2097152;
const unsigned int SingleDeviceDataLoader::m_endUser = 2097160;

const unsigned int SingleDeviceDataLoader::m_startConfig = 3145728;
const unsigned int SingleDeviceDataLoader::m_endConfig = 3145742;

const unsigned int SingleDeviceDataLoader::m_startGPR = 0;
const unsigned int SingleDeviceDataLoader::m_endGPR = 3936;

const unsigned int SingleDeviceDataLoader::m_startDeviceId = 4194302;
const unsigned int SingleDeviceDataLoader::m_endDeviceId = 4194304;

const int SingleDeviceDataLoader::m_bytesPerWordFLASH = 2;

const QList<Device::ConfigWord> SingleDeviceDataLoader::m_configWords = QList<Device::ConfigWord>();

#endif // SINGLEDEVICELOADERDATA_H

