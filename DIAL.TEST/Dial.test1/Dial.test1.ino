void setup() {
  
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  
  //put your setup code here, to run once:

}

void loop() {
  int val = analogRead(0);

  //map takes 5 arguments:
  //the varibale name of the analog read, value you want to map
  //input minimum
  //input maximum
  //subjective output minimum
  //subjective output maximum

  
  int mappedVal = map(val, 0, 1023, 1, 10);

  mappedVal *= 1000;

  // make sounds!
 
  digitalWrite(8, HIGH);
  delayMicroseconds(mappedVal);
  digitalWrite(8, LOW);
  delayMicroseconds(mappedVal);
  
//ln means line 
//print without the ln with print across  

  //prin out useful diagnostic information
  //but remmeber to comment it out when you
  //play the sketch for real, otherwise it
  //messes up the sound by adding additional
  //delay! 
  Serial.print(mappedVal);
  Serial.print(",");
  Serial.println(val);

  //delay(20);
  // put your main code here, to run repeatedly:

}
