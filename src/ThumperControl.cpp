#include "ThumperControl.h"

ThumperControl::ThumperControl(std::string url)
{
  this->url = url;
  this->rgb = "/neopixels/strings/0";
  this->drive = "/speed";
}

void ThumperControl::post(std::string url, std::string json)
{
  RestClient::Response r = RestClient::post(url, "application/json", json);
}

void ThumperControl::setRGB(RGBColor * color)
{
  int red = (int) (color->getRed() * 255.0);
  int green = (int) (color->getGreen() * 255.0);
  int blue = (int) (color->getBlue() * 255.0);
  std::string url = this->url + this->rgb;
  std::string json = "{ \"red\":" + std::to_string(r) + ", \"green\":" + std::to_string(b) + ", \"blue\":" + std::to_string(b) + "}";
  post(url, json);
}

void ThumperControl::setDrive(int left, int right)
{
  std::string url = this->url + this->drive;
  std::string json = "{ \"left_speed\":" + std::to_string(left) + ", \"right_speed\":" + std::to_string(right) + "}";
  post(url, json);
}
