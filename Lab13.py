List = [[-2,3,-5], [-8,4,-6], [9,-3,77], [11,-2,9]]
def both_Lists(L1):
    print("2D List:")
    for i in L1:
        for j in i:
            print("{0:2d}".format(j), end = " ")
        print()

    print("\nNumber of even, non-negative values:")
    for i in range(len(L1)):
        print("Row",i + 1, end = ": ")
        count = 0
        for j in range(len(L1[i])):
            if L1[i][j] % 2 != 0 and L1[i][j] < 0:
                count += 1
                L1.append(j)
        print(count)
                

both_Lists(List)
