/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
#include <Servo.h>
#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;// create servo object to control a servo// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  myservo.attach(7);
  myservo2.attach(6);
  myservo3.attach(5);// attaches the servo on pin 9 to the servo object
}

void loop() {
  int x = analogRead(0);
  int mappedx = map(x,0,1023,0,180);
  int y = analogRead(1);
  int mappedy = map(y,1,1023,0,180);
  int z = analogRead(2);
  int mappedz = map(z,2,1023,0,180);
  
  Serial.println(x);
  
  myservo.write(mappedx);
  myservo2.write(mappedy);
  myservo3.write(mappedz);
}

