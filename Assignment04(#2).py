import math
file = open("tempconv.txt",'w')

file.write("{0:12s}{1:12s}\n".format("Fahrenheit","Celcius"))

for Fahrenheit in range(-10,11):
    Celcius = ((Fahrenheit - 32) * (5 / 9))
    file.write("{0:<12.2f}{1:<12.2f}\n".format((Fahrenheit),(Celcius)))

file.close()

