int speakerPin = 8;

void setup() {
  pinMode(speakerPin, OUTPUT);
  // put your setup code here, to run once:

}
// i
// i
void loop() {
  for (int i = 10000; i > 200; i -= 2000) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i*1000);

    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i*1000);


  }
  delay (100);
//  for (int i = 6000; i > 100; i -= 3000) {
//    digitalWrite(speakerPin, HIGH);
//    delayMicroseconds(20);
//
//    digitalWrite(speakerPin, LOW);
//    delayMicroseconds(20);
//
//
//  }

delay (10);
  // put your main code here, to run repeatedly:

}
