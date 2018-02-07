int num = 50;
int[] x = new int[num];
int[] y = new int[num];

void setup() { 
  size(500, 500);
  fill(255, 102);
}

void draw() {
  background(255);
  // Shift the values to the right
  for (int i = num-1; i > 0; i--) {
    x[i] = x[i-1];
    y[i] = y[i-1];
  }
  // Add the new values to the beginning of the array
  x[0]= mouseX;
  y[0] = mouseY;
  // Draw the circles
  for (int i = 0; i < num; i++) {
    ellipse(x[i], y[i], i/2.0, i/2.0);
  }
}

void mouseDragged() {
  line(mouseX,mouseY,pmouseX,pmouseY);
}

void keyPressed() {
  println(key);
  
  if(key == 'a') {
    strokeWeight(10);
    stroke(125,36,165);
  
  
  }
// if the key that is pressed is A then...
    if(key == 's') {
      //...set the stoke weight to 1
    strokeWeight(10);
    stroke(236,166,122);
   
  }
}