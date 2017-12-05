#pragma once

class RGBColor{
    private:
      float red = 0;
      float green = 0;
      float blue = 0;

    public:
      RGBColor(void);
      void setRed(float red);
      void setGreen(float green);
      void setBlue(float blue);
      float getRed(void);
      float getGreen(void);
      float getBlue(void);

};
