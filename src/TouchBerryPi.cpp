#include "TouchBerryPi.h"

TouchBerryPi::TouchBerryPi(void)
{
  touchInterface = new TouchInterface( QT1070 );
  ledBar = new LedBar( TLC59116 );
  color = new RGBColor();
  cycler = new RGBCycler();
  thumper = new ThumperControl("http://192.168.1.110:3000");
}

void TouchBerryPi::start(void)
{
  std::string old = "";
  float progress = 0;
  float progressOld = 0;

  while( true )
  {
    std::string button = touchInterface->getButton();

    // Button handeler

    switch(button) {
      case button == "A"  :
        progress = progress + 0.05;
      break;
      case button == "B"  :
        progress = progress - 0.05;
      break;
      case button == "X"  :
        thumper->setAlarm("on");
      break;
      case button == "UP"  :
        thumper->setDrive(200, 200);
      break;
      case button == "DOWN"  :
        thumper->setDrive(-200, -200);
      break;
      case button == "LEFT"  :
        thumper->setDrive(-150, 150);
      break;
      case button == "RIGHT"  :
        thumper->setDrive(150, -150);
      break;
      case button == "NONE"  :
        thumper->setDrive(0, 0);
        thumper->setAlarm("off");
      break;
}

    // Handle color of leds (on TouchBerryPi and Thumper)

    if(progress > 1){progress = 0;}
    if(progress < 0){progress = 1;}

    if(progress != progressOld)
    {
      cycler->calculateRGB(progress, color);
      for (int led = 0; led < 5; led++) {
        ledBar->setLed(led, color);
      }
      thumper->setRGB(color);
    }


    usleep(50000);         // 20Hz refresh
  }
}
