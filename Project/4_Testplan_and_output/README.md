# Test plan and Output
## High level Test plan

| Test ID | Description | Expected i/p | Expected o/p | Actual o/p | Status |
| --- | --- | --- | --- | --- | --- |
| HL_1 | Path sensing using ultrasonic sensor | Program execution | Obstacle detection and path sensing | Obstacle detection and path sensing |:heavy_check_mark: |
| HL_2 | Calculating the obstacle distance | Program execution | Display of Distance on LCD | Display of Distance on LCD |:heavy_check_mark: |
| HL_3 | Movement of the bot | Program execution | Rotation of DC motor through driver L239D |  Rotation of DC motor through driver L239D |:heavy_check_mark: |
| HL_4 | Staircase detection using IR sensor | User execution | pressing the push button by user as a interrupt | pressing the push button by user as a interrupt |:heavy_check_mark: |
| HL_5 | Controlling suction power | Program execution | Blinking of LED light | Blinking of LED light |:heavy_check_mark:|

## Low Test plan
| ld | Description | Category |
| --- | --- | --- |
| LL1 | Three directions to be sensed by ultrasonic sensor | Program execution | Directions and obstacles are detected | Directions and obstacles are detected | :heavy_check_mark:|
| LL2 | To send and receive the ultrasonic waves | Program execution | trigger and echo pins perform this task | trigger and echo pins perform this task | :heavy_check_mark:|
| LL3 | Calculating the distance travelled by ultrasonic waves and multiplying the duration by 0.034 | Program execution | Distance in cm unit is displayed on LCD | Distance in cm unit is displayed on LCD | :heavy_check_mark:|
| LL4 | Various movement patterns based on obstacle | Program execution | DC motors rotate accordingly | DC motors rotate accordingly | :heavy_check_mark:|
| LL5 | Emitting IR rays through led and capturing reflected rays through photodiode | Program execution | Push button saying stairs detected | Push button saying stairs detected | :heavy_check_mark:|
| LL5 | suction of dust particles using Vacuum tube | Program executionl | Blinking of led light | Blinking of led light | :heavy_check_mark:|

