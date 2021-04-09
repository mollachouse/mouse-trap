#include <Servo.h>
Servo servo;
int const trig = 3;
int const echo = 2;

void setup()
{
pinMode(trig, OUTPUT); 
pinMode(echo, INPUT);
servo.attach(5);
}

void loop()
{       
  int duration, distance;
  digitalWrite(trig, HIGH); 
  delay(1);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) / 29.1;
  
  if (distance <= 8 && distance >= 0)
    {
    servo.write(160);
    delay(3000);
    }
    else {
      servo.write(50);
      }
      delay(30);
      }
