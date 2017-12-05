#include "TLC59116.h"

TLC59116::TLC59116(int addr)
{
  i2c = new I2C(addr);
  enable();
  setOutputState(0xFF,0xFF,0xFF,0xFF);
}

void TLC59116::enable()
{
    // should readout register state first
    setRegister(0,0);
}

void TLC59116::disable()
{
    // should readout register state first
    setRegister(0,1 << 4);
}

void TLC59116::setOutputState(int ledout0, int ledout1, int ledout2, int ledout3)
{
    setRegister(0x14,ledout0);
    setRegister(0x15,ledout1);
    setRegister(0x16,ledout2);
    setRegister(0x17,ledout3);
}

void TLC59116::setOutput(int led, float brightness)
{
    char data[] = {0x02 + led, brightness * 255.0};
    i2c->writeI2C( data, 2 );
}

void TLC59116::setRegister(int reg, int value)
{
    char data[] = {reg, value};
    i2c->writeI2C( data, 2 );

}
