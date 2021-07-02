#include "TouchBerryPi.h"

int main(void)
{
  TouchBerryPi * touchBerryPi;
  touchBerryPi = new TouchBerryPi();

  touchBerryPi->start();
  
  delete touchBerryPi;
  touchBerryPi = NULL;
}
