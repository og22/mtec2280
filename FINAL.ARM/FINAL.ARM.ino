/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;// create servo object to control a servo// twelve servo objects can be created on most boards

int PosX = 0;
int pos = 0;    // variable to store the servo position
int previousX = 0;


void setup() {
  Serial.begin(9600);
  myservo.attach(7);
  myservo2.attach(6);
 // attaches the servo on pin 9 to the servo object
}

void loop() {

  if (Serial.available() > 0) {
 
    // read the incoming bytes
    PosX = Serial.read();
}

  int x = analogRead(5);
  int smoothX = (x * .05) + (previousX * .95);
  previousX = smoothX;

  
  int mappedx = map(smoothX,200,500,130,40);

  Serial.println(x);
  
  myservo.write(mappedx);
  
  myservo2.write(PosX);
 
}

