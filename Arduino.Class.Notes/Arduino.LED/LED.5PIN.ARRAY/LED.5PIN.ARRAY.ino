// 0,1,2,3,4,5
int ledPin[] = {5, 6, 7, 8, 9};

void setup() {
  // for loop that sets all LED pins to OUTPUT
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], HIGH);
    // put your main code here, to run repeatedly:
delay(i * 700);
  }  

  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);
    delay(i * 400);

  }

}

