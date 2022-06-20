import math

def distance(x1,y1,x2,y2):
    return math.sqrt((x2 - x1) ** 2) + ((y2 - y1) ** 2)

def radius(x1,y1,x2,y2):
    return distance(x1,y1,x2,y2)

def circumference(r):
    return 2 * 3.1416 * r
    

x1 = float(input("Enter the x coordinate of the center of the circle: "))
y1 = float(input("Enter the y coordinate of the center of the circle: "))
x2 = float(input("Enter the x coordinate of a point of the circle: "))
y2 = float(input("Enter the y coordinate of a point of the circle: "))
r = radius(x1,y1,x2,y2)
c = circumference(r)

print("Circle Radius = ",r)
print("Circle circumference = ",c)
