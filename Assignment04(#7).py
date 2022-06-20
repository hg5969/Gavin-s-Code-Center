import random

def dice_sum():
    desired_sum = int(input("Desired dice sum: "))
    while(True):
        num1 = random.randint(1,6)
        num2 = random.randint(1,6)
        total = num1 + num2
        print(num1,"and",num2,"=",total)
        if total == desired_sum:
            break        
        
dice_sum()
    

