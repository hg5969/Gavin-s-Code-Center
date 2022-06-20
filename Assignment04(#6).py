num1 = 1
total = 0

while num1 > 0:
    num1 = float(input("Enter a number: "))
    num2 = float(input("Enter another number: "))
    if num1 > 0:
        total = num1 + num2
        print("The sum of numbers entered is",total)
        reply = input("Do you want to do that agian? (y/n): ")
        if reply == 'y':
            continue
        elif reply == 'n':
            break
        else:
            print("please select (y/n) only.")
            continue
        



            
        
        
