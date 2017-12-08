#include "TouchInterface.h"

TouchInterface::TouchInterface( int addr )
{
qt1070 = new QT1070(addr);
}

int TouchInterface::getButton( void )
{
  //std::string button;

  // switch( (int) qt1070->getKey() )
  // {
  //   case 1 :  button = "LEFT"; break;
  //   case 2 :  button = "RIGHT"; break;
  //   case 4 :  button = "UP"; break;
  //   case 8 :  button = "DOWN"; break;
  //   case 16 :  button = "B"; break;
  //   case 32 :  button = "A"; break;
  //   case 64 :  button = "X"; break;
  //   default:  button = "NONE"; break;
  // }
  return qt1070->getKey();
}
