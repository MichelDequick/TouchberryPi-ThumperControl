#pragma once

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "I2C.h"

class QT1070
{
private:
  I2C * i2c;

public:
  QT1070( int addr );
  char getKey( void );

};
