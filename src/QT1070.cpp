#include "QT1070.h"

QT1070::QT1070( int addr )
{
  i2c = new I2C(addr);
}

char QT1070::getKey( void )
{
  char buffer[1];
  buffer[0] = 0x03;

  i2c->writeI2C( buffer, 1 );     // Preparing QT1070 for reading
  i2c->readI2C( buffer, 1 );      // Reading pressed buttons
  return buffer[0];
}
