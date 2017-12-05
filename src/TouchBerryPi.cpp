#include "TouchBerryPi.h"

TouchBerryPi::TouchBerryPi(void)
{
  touchInterface = new TouchInterface( QT1070 );
  ledBar = new LedBar( TLC59116 );
}

void TouchBerryPi::start(void)
{
  color = new RGBColor();
  cycler = new RGBCycler();
  std::string old = "NONE";

  float progress = 0;

  while( true )
  {
      cycler->calculateRGB(progress, color);
      //system("clear");
      //std::cout << "Progress: " << std::fixed << std::setprecision(5) << progress << std::endl;
      //std::cout << "Red: " << std::fixed << std::setprecision(5) << color->getRed() << std::endl;
      //std::cout << "Green: " << std::fixed << std::setprecision(5)  << color->getGreen() << std::endl;
      //std::cout << "Blue: " << std::fixed << std::setprecision(5)  << color->getBlue() << std::endl;


      usleep(1000);
      progress = progress + 0.002;
      if(progress >= 1){progress = 0;}

      ledBar->setLed(0, color);
      ledBar->setLed(1, color);
      ledBar->setLed(2, color);
      ledBar->setLed(3, color);
      ledBar->setLed(4, color);





    std::string out = touchInterface->getButton();

    if( out != old )
    {
      system("clear");
      std::cout << "Button: " << out << std::endl;
      old = out;
    }
  }
}
