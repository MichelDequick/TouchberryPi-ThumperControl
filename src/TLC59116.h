// Based on https://os.mbed.com/users/sillevl/code/TLC59116/

#pragma once

#include "I2C.h"

class TLC59116{
    private:
    I2C * i2c;

    void setRegister(int reg, int value);

    public:

    TLC59116(int addr);

    void setOutput(int led, float brightness);
    void enable();
    void disable();
    void setOutputState(int ledout0, int ledout1, int ledout2, int ledout3);
};
