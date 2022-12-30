PImage img,img2,imgBG;
void setup(){
  size(400,400);
  imgBG=loadImage("BG.png");
  img=loadImage("astro.png");
  img2=loadImage("image2.png");
}
void draw(){
  image(imgBG,0,0);
  image(image,mouseX,mouseY);
  image(image2,100,100);
}
