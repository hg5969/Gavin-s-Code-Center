def gallons(w):
    results = w / 115
    results = round(results)
    return results

def laborHours(gallons):
    labor = gallons(w) * 8
    return labor

def paintCharges(w,p):
    costP = (gallons(w)) * p
    return costP

def laborCharges(w):
    costL = ((gallons(w)) * 8) * 20
    return costL

def totalCost(paintCharges,laborCharges):
    total = paintCharges(w,p) + laborCharges(w)
    return total

w = float(input("Enter wall space in square feet: "))
p = float(input("Enter paint price per gallon: "))

print("Gallons of paint:",gallons(w))
print("Hours of labor:",laborHours(gallons))
print("Paint charges:","$",paintCharges(w,p))
print("Labor charges:","$",laborCharges(w))
print("Total cost:","$",totalCost(paintCharges,laborCharges))

