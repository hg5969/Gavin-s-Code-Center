import random

retailPrice = 25

for i in range(0,3):
    r = random.randint(1,150)
    t = float(r * retailPrice)
    d = 0
    if r >= 10 and r < 20:
        d = t * .2
    elif r >= 20 and r < 50:
        d = t * .3
    elif r >= 50 and r < 100:
        d = t * .4
    elif r >= 100:
        d = t * .5
    print("\nNumber of Packages Purchased:",r)
    print("Discount Amount: $",d)
    print("Total Amount:",t - d)
