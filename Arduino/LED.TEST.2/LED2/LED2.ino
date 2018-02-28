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
  for (int i = 0; i < 200; i +=10) {

      
  digitalWrite(8,HIGH); //Turns LED on

  delay(i); // wait one second
  
  digitalWrite(8,LOW); //Turns LED off
  
  delay(i); // wait one second
 
  }
}
