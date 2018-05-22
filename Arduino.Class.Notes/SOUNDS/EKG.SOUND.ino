void setup() {
  pinMode(8, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  for (int i = 0; i < 200; i ++) {
    digitalWrite(8, HIGH);
    delayMicroseconds(500);

    digitalWrite(8, LOW);
    delayMicroseconds(400);

  }
  delay(1500);
}
