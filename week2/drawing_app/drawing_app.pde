// comment here
void setup() {
  size(500,500);
  
  // start background as white
  background(255);
  
  // wider stroke thickness
  strokeWeight(4);
}

// comment here!
void draw() {

  //println(mouseX, mouseY);

}
   
  void mouseDragged() {
    line(mouseX,mouseY,pmouseX,pmouseY);
}
// if a key is pressed
void keyPressed() {
  println(key);
  
  // if the key that is pressed is A then...
  if(key == 'a') {
    //... set the stroke weight to 10
    strokeWeight(10);
    stroke(125,36,165);
   
  }
  // if the key that is pressed is A then...
    if(key == 's') {
      //...set the stoke weight to 1
    strokeWeight(1);
    stroke(236,166,122);
   
  }
}