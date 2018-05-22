void setup(){
  size(600, 600);
  // center align text
  textAlign(CENTER, CENTER);
  // increase font size
  textSize(100);
}
void draw(){
}

void keyPressed() {
  
  background(0);
  
  int coin = int(random(2));
  
  if(coin == 0) {
    
    text("tails", width/2, height/2);
    
}
  if(coin == 1) {
    
    text("heads", width/2, height/2);
  }

}