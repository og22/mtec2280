#include <SoftwareSerial.h>

#include <Servo.h>
#include <Servo.h>
#include <Servo.h>

Servo myservo;
Servo myservo2;
Servo myservo3;// create servo object to control a servo// twelve servo objects can be created on most boards


int inByte = 0;

//int pos = 0;    // variable to store the servo position


// which pins for RX and TX on arduino?
int rxPin = 3;
int txPin = 2;

// create a BT object using rx and tx pins
SoftwareSerial bluetooth(rxPin, txPin); // RX, TX

void setup() {
  // set up both serials
  Serial.begin(9600);
  bluetooth.begin(9600); 
  myservo.attach(7);
  myservo2.attach(6);
  myservo3.attach(5);

  // cooler button metho  pinMode(buttonPin, INPUT_PULLUP);

  

  // set up both serials
  Serial.begin(9600);
  bluetooth.begin(9600);
}
void loop() {
  while (bluetooth.available()) {
    inByte = bluetooth.read();
    Serial.println(inByte);
    Serial.println("Hello");
  }
  while (Serial.available()) {
    inByte = Serial.read();
    bluetooth.println(inByte);
  }
  myservo.write(inByte);
  
  delay(5);
  //myservo2.write(inByte);
  //myservo3.write(inByte);
}
