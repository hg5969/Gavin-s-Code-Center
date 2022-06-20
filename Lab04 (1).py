def allNums(num1,num2):
    print("Enter all numbers:")
    for i in range(num1,num2 + 1):
        print(i,end = " ")

def allOdds(num1,num2):
    print("\nEnter all odd numbers: ")
    for i in range(num1,num2 + 1):
        if i % 2 != 0:
            print(i,end = " ")

def evenSum(num1,num2):
    print("\nPrint the sum of the even numbers: ")
    sumValue = 0
    for i in range(num1,num2 + 1):
        if i % 2 == 0:
            sumValue += i
    print(sumValue)

def oddSum(num1,num2):
    print("Print the sum of the square of the odd numbers: ")
    sumValue = 0
    for i in range(num1,num2 + 1):
        if i % 2 != 0:
            sumValue += i ** 2
    print(sumValue)
            
num1 = int(input("Enter an odd number: "))
num2 = int(input("Enter an even number: "))

allNums(num1,num2)
allOdds(num1,num2)
evenSum(num1,num2)
oddSum(num1,num2)
