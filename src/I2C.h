#pragma once

#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

class I2C
{
private:
  int addr;
  std::string filename;
  int file;


public:
  I2C( int addr );
  bool writeI2C( char buffer[], int bufferLength );
  bool readI2C( char buffer[], int bufferLength );



};
