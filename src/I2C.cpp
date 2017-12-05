#include "I2C.h"

I2C::I2C( int addr )
{
  this->addr = addr;

  this->filename = "/dev/i2c-1";
  this->file = open(this->filename.c_str(),O_RDWR);
  ioctl(this->file, I2C_SLAVE, this->addr);

}

bool I2C::writeI2C( char buffer[], int lengthBuffer )
{
  //usleep(10000);
  if (write(file,buffer,lengthBuffer) == lengthBuffer )
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool I2C::readI2C( char buffer[], int lengthBuffer )
{
  //usleep(10000);
  if (read(file,buffer,lengthBuffer) == lengthBuffer )
  {
    return true;
  }
  else
  {
    return false;
  }
}
