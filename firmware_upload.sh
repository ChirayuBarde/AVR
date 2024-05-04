#linux
#COPYRIGHT (c) 2019-24 Chirayu Barde
#Author: Chirayu Barde
make clean
make
#sudo avrdude -c usbasp -p m328p -U main.hex
avrdude -v -p atmega328p -c arduino -P /dev/ttyACM0 -b 115200 -D -U flash:w:main328p.hex:i
