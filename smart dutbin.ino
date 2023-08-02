#include <Servo.h>
Servo servoMain; // 
int trigpin = 9;
int echopin = 8;
int distance;
float duration;
float cm;

void setup()
{
   servoMain.attach(7); // 
    pinMode(trigpin, OUTPUT);
    pinMode(echopin, INPUT);
}

void loop()
{ 
  digitalWrite(trigpin, LOW);
  delay(1);  
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(0.50);  
  digitalWrite(trigpin, LOW);  
  duration = pulseIn(echopin, HIGH);  
  cm = (duration/60);
  distance = cm;
  
  if(distance<30)
  {
    servoMain.write(180);  // 
   delay(300); 
  }
   else{
     servoMain.write(0);
     delay(50);
   }
   
}