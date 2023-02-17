PImage img,img2,imgBG;
void setup(){
  size(400,400);
  imgBG=loadImage("BG.png");
  img=loadImage("astro.png");
  img2=loadImage("image2.png");
}
void draw(){
  imageMode(CENTER);
  image(imgBG,200,100,400,400);
  image(image,mouseX,mouseY);
  image(image2,100,100);
}
