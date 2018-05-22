size(500,500);
//start i at o
//and until its more than 1000
//draw a random line
// and increment i by 1
for(int i = 0; i < 300; i++) {
  float x1 = random(width);
  float y1 = random(height);
  
  float x2 = x1 + 10;
  float y2 = y1 + 10;
  //any time you rotate, use pushMatrix
  pushMatrix();
  //rotate at random 360
  translate(x1,y1);
  
  rotate(random(TWO_PI));
  
  line(0,0,150,10);
  popMatrix();
}