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

### Download code
Execute folowing comand to download the code, make sure git is installed.
Move to a suting folder for this project.
```{r, engine='sh', count_lines}
git clone https://github.com/MichelDequick/TouchberryPi-ThumperControl.git
```

## Compilling the whole project:
move inside the project folder .../TouchberryPi-ThumperControl
```
make clean
make
```
