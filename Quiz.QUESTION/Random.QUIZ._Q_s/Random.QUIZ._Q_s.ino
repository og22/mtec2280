// using random to turn LED's ON/OFF


int ledPin[] = {5, 6, 7, 8, 9};

void setup() {

  randomSeed(analogRead(0));
  for(int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
    }
  // put your setup code here, to run once:
}

void loop() {
  for(int i = 0; i < 5; i ++) {
    digitalWrite(ledPin[i], LOW); 
    }
  int rando = random(5); //give you numbers 0-> 4
  digitalWrite(rando, HIGH);

  delay(1000);
  
}
