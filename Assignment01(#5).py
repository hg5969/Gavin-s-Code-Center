def classA(a):
    costA = a * 15
    return costA
def classB(b):
    costB = b * 12
    return costB
def classC(c):
    costC = c * 9
    return costC
def totalIncome(classA,classB,classC):
    total = classA(a) + classB(b) + classC(c)
    return total
a = int(input("Enter count of A seats: "))
b = int(input("Enter count of B seats: "))
c = int(input("Enter count of C seats: "))

print("Income from class A seats:","$",classA(a))
print("Income from class B seats:","$",classB(b))
print("Income from class C seats:","$",classC(c))
print("Total income:","$",totalIncome(classA,classB,classC))
