#include "RGBColor.h"

RGBColor::RGBColor(void)
{

}

void RGBColor::setRed(float red)
{
  this->red = red;
}

void RGBColor::setGreen(float green)
{
  this->green = green;
}

void RGBColor::setBlue(float blue)
{
  this->blue = blue;
}

float RGBColor::getRed(void)
{
  return this->red;
}

float RGBColor::getGreen(void)
{
  return this->green;
}

float RGBColor::getBlue(void)
{
  return this->blue;
}
