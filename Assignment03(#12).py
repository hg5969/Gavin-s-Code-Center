def histogram():
    string = input("Enter a string: ")
    l = list(set(string))
    l.sort()
    count = 0
    for i in l:
        if i != " ":
            count = string.count(i)
            print(str(i).upper(), end = " ")
            print(count * "* ")

histogram()
