def drawSquare(myturtle,sideLength):
    sideLength += 0
    for i in range(10):
        sideLength = sideLength + 10
        myturtle.forward(sideLength)
        myturtle.left(90)
        myturtle.forward(sideLength)
        myturtle.left(90)
        myturtle.forward(sideLength)
        myturtle.left(90)
        myturtle.forward(sideLength)
        myturtle.left(90)
        myturtle.up()
        myturtle.right(90)
        myturtle.forward(5)
        myturtle.right(90)
        myturtle.forward(5)
        myturtle.right(180)
        myturtle.down()
               
        
        

import turtle

t = turtle.Turtle()

drawSquare(t,90)

t.up()
t.goto(0,0)
