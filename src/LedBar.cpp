#include "LedBar.h"

LedBar::LedBar(int addr)
{
  tlc59116 = new TLC59116(addr);
  tlc59116->setOutputState(0xAA, 0xAA, 0xAA, 0xAA);
}

void LedBar::setLed(int led, RGBColor * color)
{
  float red = color->getRed();
  float green = color->getGreen();
  float blue = color->getBlue();

  led = led * 3;
  tlc59116->setOutput(led, green);
  tlc59116->setOutput(led + 1, red);
  tlc59116->setOutput(led + 2, blue);
}
