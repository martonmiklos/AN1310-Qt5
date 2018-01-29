#ifndef CRC_H
#define CRC_H

#include <qglobal.h>

/*!
 * Calculates 16-bit CCITT CRC values using fast lookup table algorithm.
 */
class Crc
{
public:
    Crc(unsigned short init = 0);
    void Add(quint8 byte);

    quint8 MSB(void);
    quint8 LSB(void);
    unsigned short Value(void);

protected:
    unsigned short crc;
    static const unsigned short table[256];
};

#endif // CRC_H
