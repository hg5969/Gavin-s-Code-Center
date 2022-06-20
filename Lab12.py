from cImage import *

MyImage = ImageWin("Lab 12",300,300)

image = EmptyImage(300,300)

green = Pixel(0,255,0)

red = Pixel(255,0,0)


for i in range(300):
    image.setPixel(150,i,green)
    
for i in range(300):
    image.setPixel(i,150,green)
    
for i in range(150,300):
    image.setPixel(i,i,red)



image.draw(MyImage)
image.save("image.gif")
MyImage.exitOnClick()
    
    
