# Automatic Floor Cleaner

# Description
* An Automatic floor cleaner embedded system is designed which can crawl throughout the room and can collect garbage and dust particles using vaccum pump mounted on this device. The controller is used to drive the motors and the
suction unit,  also a couple of sensors are used to avoid the obstacles present on the way. This design is
used for domestic and industrial purpose.

# Block Diagram
![BD_floor_clean](https://user-images.githubusercontent.com/98872185/154783217-ee02892d-c544-4a29-97e0-b79bcb813ed8.PNG)

# Components used

* This design consists of Arduino controller, Driver motors, DC motor, Ultrasonic sensor, Servo motors, Vacuum pump.

## Ardunino UNO
* Arduino UNO is a microcontroller board which has ATmega328 from the AVR family which controlls the all process to be carried out in the system.
* There are 14 digital input/output pins, 6 Analog pins, a 16 MHz ceramic resonator, USB connection, power jack, and also  has a  reset button. 
* Its software supported  by  a number  of libraries  that makes the programming easier.

## Driver Motors
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
Distance= ?? (speed of sound * time taken)

## Servo Motor
* A servo motor  is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration.
* It consists of a suitable motor coupled to a sensor for position feedback. 
* The servo motor is used to rotate the ultrasonic sensor so that it can 'look-around'.

## Vacuum Pump
* For Cleaning purpose  vacuum pump is used instead of conventional blower fans, resulting in higher suction power, leading to shorter cleaning time with better cleaning results. 
* The powerful suction thus generated enables to pick metal chips, garbage, paper pieces, dust particles.

# V-Model design
![v_model](https://user-images.githubusercontent.com/98872185/154843619-51f6a8b5-bf05-4366-bcbe-94ac0f084d1f.PNG)

# Applications of Vacuum cleaner
1) Freshen Upholstery, Pillows, and Carpets.
2) Prevent House Fires.
3) Reduce Indoor Allergens.
4) Exert Insect Control.

# System Design
1) Path sensing unit.
2) Distance calculation.
3) Robotic movement.
4) Suction unit.

# Sub-system Design
1) Direction control by ultrasonic sensor.
2) Communication through ultrasonic waves.
3) Calculation of travelling duration.
4) Various movement patterns.
5) Vacuum suction of particles.


## High level requirements
| ld | Description | Category |
| --- | --- | --- |
| HL1 | Path sensing using ultrasonic sensor | Technical |
| HL2 | Calculating the obstacle distance | Technical |
| HL3 | Movement of the bot | Technical |
| HL4 | Controlling suction power | Technical |

## Low level requirements
| ld | Description | Category |
| --- | --- | --- |
| LL1 | Three directions to be sensed by ultrasonic sensor (Left, right, Front) | Technical |
| LL2 | To send and receive the ultrasonic waves | Technical |
| LL3 | Calculating the distance travelled by ultrasonic waves and multiplying the duration by 0.034 | Technical |
| LL4 | Various movement patterns based on obstacle | Technical |
| LL5 | suction of dust particles using Vacuum tube | Technical |
