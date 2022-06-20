L1 = []

def dl(stringlist):
    print("Original list:",stringlist)
    for i in stringlist:
        L1.append(i)
        L1.append(i)
    return L1
dl(['how','are','you?'])
print("Double list:",L1)
