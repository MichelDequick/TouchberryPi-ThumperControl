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
cd /usr/local/src
git clone https://github.com/nlohmann/json.git
cp json/src/json.hpp /usr/local/include/
```



## Compilling the whole project:
```
make clean
make
```
