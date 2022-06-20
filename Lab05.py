def table():
    num = int(input("Enter the number of days: "))
    print("Day      Pennies")
    print("--------------------")
    a = 0
    p = 0.005
    for i in range(1,num + 1):
        p = p * 2
        a = a + p
        print(i,"      $",p)
    print("the total salary for",num,"days is:","$",round(a,3))

table()
