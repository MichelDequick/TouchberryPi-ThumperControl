# TouchberryPi-ThumperControl

##Dependencies

### Installing git & downloading library:
```
sudo apt-get update && sudo apt-get install git build-essential autoconf automake libtool libcurl4-gnutls-dev
```

### Compiling the library:
```
sudo su
cd /usr/local/src
git clone https://github.com/mrtazz/restclient-cpp.git
cd restclient-cpp
./autogen.sh
./configure
make install
ldconfig
```



## Compilling the whole project:
```
make clean
make
```
