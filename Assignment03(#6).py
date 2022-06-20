list1 = []
for i in range(10):
    list1.append(float(input("Enter a number: ")))
def low(L):
    L.sort()
    print("Low:",L[0])

def high(L):
    L.sort()
    print("High:",L[len(L)-1])

def total(L):
    total = 0
    for k in L:
        total += k
    print("Total:",total)

def avg(L):
    total = 0
    for k in L:
        total += k
    average = total / len(L)
    print("Average:",average)
        
    
low(list1)
high(list1)
total(list1)
avg(list1)
