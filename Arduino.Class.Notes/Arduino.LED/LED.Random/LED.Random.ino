// 0,1,2,3,4,5
int ledPin[] = {5, 6, 7, 8, 9};
// the bracket[] lets you know it's going to be an array
void setup() {
  //set them all for a LED OUTPUT
  for(int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
    }

  Serial.begin(9600);
  randomSeed(analogRead(0));
 
  }
void loop() {
  
  int rando = random(6);
  Serial.println(rando);

  delay(500);
  // put your main code here, to run repeatedly:

}
