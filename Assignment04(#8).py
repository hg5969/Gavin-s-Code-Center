def print_average():
    sum_nums = 0
    x = 3
    count = 0
    while x > 0:
        num = int(input("Type a number: "))
        if num >= 0:
            sum_nums = sum_nums + num
            count += 1
        else:
            count = 1
            break
    print("Average was",(sum_nums / count))
print_average()        
        
