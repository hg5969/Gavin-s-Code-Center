import random

listL = []

for i in range(0,5):
    x = random.randint(1,10)
    listL.append(x)

print("Old List:",listL)

#swap
def letterSwap(mylist,num1,num2):

    mylist[num1], mylist[num2] = mylist[num2], mylist[num1]
    return mylist

myList = listL
num1,num2 = 1, 5
print("New List after swapping first and last elements in Old List:",letterSwap(myList, num1-1, num2-1))

#reverse

def reverse(m):
    return[ele for ele in reversed(m)]

m = letterSwap(myList, num1-1, num2-1)
print("After reversing New List elements:",reverse(m))
