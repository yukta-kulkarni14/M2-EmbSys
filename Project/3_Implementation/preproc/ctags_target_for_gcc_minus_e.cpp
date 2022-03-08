# 1 "H:\\arduino_module2\\ultra_dc_switch\\ultra_dc_switch.ino"
# 1 "H:\\arduino_module2\\ultra_dc_switch\\ultra_dc_switch.ino"




const int buttonPin = A1;
const int ledPin = A0;
int buttonState = 0;

const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 4;
const int rightBackward = 5;

# 15 "H:\\arduino_module2\\ultra_dc_switch\\ultra_dc_switch.ino" 2
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup()
{

 lcd.begin(16, 2);

 pinMode(7, 0x1);
 pinMode(6, 0x0);
 pinMode(leftForward , 0x1);
  pinMode(leftBackward , 0x1);
  pinMode(rightForward , 0x1);
  pinMode(rightBackward , 0x1);
  pinMode(ledPin, 0x1);
  pinMode(buttonPin, 0x0);
}

long duration, distance;
void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance : ");
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.println("cm");
  delay(1000);

  digitalWrite(7, 0x0);
  delayMicroseconds(2);
  digitalWrite(7, 0x1);
  delayMicroseconds(10);
  digitalWrite(7, 0x0);
  duration = pulseIn(6, 0x1);
  distance = (duration/2) / 29.1;

  digitalWrite(leftForward , 0x1);
  digitalWrite(leftBackward , 0x0);
  digitalWrite(rightForward , 0x1);
  digitalWrite(rightBackward , 0x0);

   buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == 0x1)
  {
    // turn LED on:
    digitalWrite(ledPin, 0x1);
  } else
  {
    // turn LED off:
    digitalWrite(ledPin, 0x0);
  }
}
