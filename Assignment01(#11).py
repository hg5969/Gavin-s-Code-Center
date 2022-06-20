def allNums(A,B):
    print("Enter all numbers: ")
    for i in range(A,B + 1):
        print(i,end = " ")
def inputSum(A,B):
    print("\nSum of numbers: ")
    sumValue = 0
    for i in range(A,B + 1):
        sumValue += i
    print(sumValue)

A = int(input("Enter a number: "))
B = int(input("Enter a number larger than the last: "))

allNums(A,B)
inputSum(A,B)
