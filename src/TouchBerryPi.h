#pragma once

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>

#include "RGBColor.h"
#include "RGBCycler.h"
#include "TouchInterface.h"
#include "LedBar.h"

class TouchBerryPi
{
private:
  TouchInterface * touchInterface;
  LedBar * ledBar;
  RGBColor * color;
  RGBCycler * cycler;

  static const int QT1070 = 0x1b;
  static const int TLC59116 = 0x60;


public:
  TouchBerryPi(void);
  void start(void);

};
