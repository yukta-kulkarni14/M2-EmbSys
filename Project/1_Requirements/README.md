# Automatic Floor Cleaner

# Description
* An Automatic floor cleaner embedded system is designed which can crawl throughout the room and can collect garbage and dust particles using vaccum pump mounted on this device. The controller is used to drive the motors and the
suction unit,  also a couple of sensors are used to avoid the obstacles present on the way. This design is
used for domestic and industrial purpose.


# Components used

* This design consists of Arduino controller, Motor Driver, DC motor, Ultrasonic sensor, IR Proximity sensor, Vacuum pump.

## Ardunino UNO
* Arduino UNO is a microcontroller board which has ATmega328 from the AVR family which controlls the all process to be carried out in the system.
* There are 14 digital input/output pins, 6 Analog pins, a 16 MHz ceramic resonator, USB connection, power jack, and also  has a  reset button. 
* Its software supported  by  a number  of libraries  that makes the programming easier.

## Motor Driver
* L293D is a Motor Driver IC which is used to connect the motor with the microcontroller and provide them  sufficient voltage supply to the design. 
* L293D has  16-pins in  which 4  are input  pins, 4  are output pins, 2 are enable pin, 4 GND pins and 2 pins for power supply.  It is used to control  DC motors simultaneously to rotate the bot in any direction. 
* It works according to the concept of H-bridge. The voltage has to change its direction to rotate the motor in clockwise or anticlockwise direction.

## DC Motors
* A simple DC motor is used to control the rotation of the machine.
* It converts the electrical energy to the mechanical energy and is connected with the wheels of the cleaner to move it in all directions. 

## Ultrasonic sensor
* Ultrasonic sensors are implemented to calculate
the distance between the obstacle and the system. 
* In order to detect the edges and to avoid obstacles, ultrasonic sensors
are mounted on front, right and left side of wheels.
* It  transmits  ultrasonic waves  and receives  the reflected  waves  and measures  the distance  to the  target  by computing  the  time between  the emission and reception. 
* For measuring the distance: 
Distance= ½ (speed of sound * time taken)

## IR Proximity Sensor
* IR sensors are object or obstacle detection infront of sensor.
* It has an IR LED and a photodiode, the IR LED emits IR light and if any obstacle comes in front of this emitted light, it will be reflected, and the reflected light will be detected by the photodiode. 
* The generated voltage from the reflection will be very low. 
* An IR module has three pins - Vcc, ground, and output. Usually, the output goes low when an obstacle comes in front of the sensor

## Voltage Reguator(LM7805)
* It is a 3-terminal voltage regulator that outputs any voltage to +5V.
* In this design it converts the 7.4V from battery to 5V.

## Vacuum Pump
* For Cleaning purpose  vacuum pump is used instead of conventional blower fans, resulting in higher suction power, leading to shorter cleaning time with better cleaning results. 
* The powerful suction thus generated enables to pick metal chips, garbage, paper pieces, dust particles.
