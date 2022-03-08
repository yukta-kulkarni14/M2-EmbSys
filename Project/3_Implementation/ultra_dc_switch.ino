
#define echoPin 6
#define trigPin 7

const int buttonPin = A1;     
const int ledPin =  A0;
int buttonState = 0; 

const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 4;
const int rightBackward = 5;

#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() 
{
 
 lcd.begin(16, 2);

 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
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
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  digitalWrite(leftForward , HIGH);
  digitalWrite(leftBackward , LOW);
  digitalWrite(rightForward , HIGH);
  digitalWrite(rightBackward , LOW);

   buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) 
  {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else 
  {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
