import math
def sphere_Volume(r):
    results = (4 / 3) * math.pi * r ** 3
    return results
r = float(input("Enter a radius "))
print(sphere_Volume(r))
