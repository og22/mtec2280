// master function 
void setup() {
  size(600, 600);
  background(0);
  noStroke();
  
  // how many times per second to draw
  frameRate(20);
}

void draw() {
  // to create a variable you have to give it a type, name and value
  // the varibale is going to have decimal point if its a floating number
  float x = random(width);
  
  float y = random(width);
  
  // gives information on console
  println(x);
  
  //create a random color of RGB and store it to
  //variables for later use
  float red = random(255);
  float green = random(255);
  float blue = random(255);
  
  // nested function 
  fill(red, green, blue);
  
  // draw the ellipse using variables as its
  ellipse(x, y, 20, 20);
  
  rect(x - 10, y + 10, 20, 20);
}