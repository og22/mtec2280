void setup() {
  size(500,500);
}
void draw(){
  println(abs(mouseX - width/2) * 2);
  background(0);
  ellipse(width/2, height/2, mouseX, mouseX);
  
}

void keyPressed() {
  println(key);
  
 
// if the key that is pressed is A then...
    if(key == 'x') {
      //...set the stoke weight to 1
    strokeWeight(5);
    stroke(236,166,122);
    fill(random(255),random(255),random(255));
   
  }
}