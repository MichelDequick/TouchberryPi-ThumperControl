#include "TouchBerryPi.h"

TouchBerryPi::TouchBerryPi(void)
{
  touchInterface = new TouchInterface( QT1070 );
  ledBar = new LedBar( TLC59116 );
  color = new RGBColor();
  cycler = new RGBCycler();
  thumper = new ThumperControl("http://192.168.1.50");
}

void TouchBerryPi::start(void)
{
  std::string old = "";
  float progress = 0;
  float progressOld = 0;

  while( true )
  {
    std::string out = touchInterface->getButton();

    // Handle color of leds (on TouchBerryPi and Thumper)
    if(out == "A"){progress = progress + 0.005;}

    if(progress >= 1){progress = 0;}

    if(progress != progressOld)
    {
      cycler->calculateRGB(progress, color);
      for (int led = 0; led < 5; led++) {
          ledBar->setLed(led, color);
        }
      thumper->setRGB(color);
    }

    if(out != old)
    {
      std::cout << out << std::endl;
      old = out;
    }





    // TODO: thumper driving

    usleep(1000);
  }
}
