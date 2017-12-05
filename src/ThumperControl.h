#pragma once

#include "restclient-cpp/restclient.h"
#include <string.h>
#include <stdlib.h>

#include "RGBColor.h"

class ThumperControl{
    private:
      std::string url;
      std::string rgb;
      std::string drive;

      void post(std::string url, std::string json);

    public:
      ThumperControl(std::string url);
      void setRGB(RGBColor * color);
      void setDrive(int left, int right);
};
