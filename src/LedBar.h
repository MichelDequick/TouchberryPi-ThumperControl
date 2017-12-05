#pragma once

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "RGBColor.h"
#include "TLC59116.h"

class LedBar
{
private:
  TLC59116 * tlc59116;

public:
  LedBar(int addr);
  void setLed(int led, RGBColor * color);

};
