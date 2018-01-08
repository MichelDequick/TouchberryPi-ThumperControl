# TouchberryPi-ThumperControl

## Dependencies

### Downloading and compiling library:
```
sudo su
sudo apt-get update && sudo apt-get install git build-essential autoconf automake libtool libcurl4-gnutls-dev
cd /usr/local/src
git clone https://github.com/mrtazz/restclient-cpp.git
cd restclient-cpp
./autogen.sh
./configure
make install
ldconfig
apt-get install i2c-tools
```

Don't forget to enable i2c by using folowing command:
```
raspi-config
```
Interface Options->I2C->Yes

## Compilling the whole project:
```
make clean
make
```
