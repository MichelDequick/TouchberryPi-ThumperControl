#pragma once

#include "QT1070.h"

#include <string.h>
#include <stdlib.h>



class TouchInterface
{
private:
  QT1070 * qt1070;

public:
  TouchInterface( int addr );
  int getButton( void );
};
