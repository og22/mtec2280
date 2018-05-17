int ledPin[] = {5, 6, 7, 8, 9};

void setup() {

  Serial.begin(9600);
  Serial.println("Serial Ready");

  randomSeed(analogRead(3));

  //...
  int rando = random(6);
  Serial.println(rando);

  for (int i = 0; i < 5; i ++) {
    pinMode(ledPin[i], OUTPUT);
    
  }

  for (int i = 0; i  < 5 ; i ++) {
    digitalWrite(ledPin[i], LOW);
  }

  for (int i = 0; i  < rando ; i ++) {
    digitalWrite(ledPin[i], HIGH);
  }
  

}

void loop() {
  for (int i = 0; i < 200; i ++) {
  digitalWrite(4, HIGH);
    delayMicroseconds(500);

    digitalWrite(4, LOW);
    delayMicroseconds(400);

  }
  delay(1500);
}
