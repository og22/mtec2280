int blinkDelay = 0; 
// variable to make blinking slow
//LED goes down over time



void setup() {
  pinMode(8,OUTPUT);
  //pinMode,
  //8 is the selected digital pin to be used (location)
  //output is to send elctricty out
  //put your setup code here, to run once:

}

void loop() {
  blinkDelay += 10; //increase the delay 
  
  digitalWrite(8,HIGH); //Turns LED on

  delay(blinkDelay); // wait one second
  
  digitalWrite(8,LOW); //Turns LED off
  
  delay(blinkDelay); // wait one second
 
   
  //high means apply voltage
  //start acting like the battary
  // put your main code here, to run repeatedly:

}
