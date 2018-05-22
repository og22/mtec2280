// 0,1,2,3,4,5
int ledPin[] = {5, 6, 7, 8, 9};

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
 
  }
void loop() {
  int rando = random(6);
  Serial.println(rando);

  delay(500);
  // put your main code here, to run repeatedly:

}
