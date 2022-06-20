import random

l = []
k = random.randint(2,10)


print("Enter",k,"values:")


for k in range(k):
    l.append(int(input("Enter a value: ")))

print("Old list:",l)


def collapse(lis):
    y = []
    if len(lis) % 2 == 0:
        i = 0
        while i < (len(lis) - 1):
            y.append(lis[i] + lis[i+1])
            i = i + 2
        print("Collapsed list:",y)

    elif len(lis) % 2 != 0:
        i = 0
        while i < (len(lis) - 1):
            y.append(lis[i] + lis[i+1])
            i = i + 2
        y.append(lis[-1])
        print("Collapsed list:",y)

collapse(l)
