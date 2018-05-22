size(500,500);
colorMode(RGB,500);
// loop to the edge
//initial 1 (create a var called i)
//condition
//increment 
//++ is equal to plus 1
//i is equal to one
//-- to decrease
for(int i = 0; i < width; i++) {
  //change color
  stroke(i,12,34);
  //draw line
  line(i,0,i,height);
  //print coordinates 
  println(i);
}