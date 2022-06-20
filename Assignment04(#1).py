import random
file = input("Enter the name of the file to which results should be written: ")
numbers = 0
numbers = int(input("Enter the number of random numbers to be written to the file: "))
file = open(file,'w')


nums = []
for n in range(numbers):
    nums.append(random.randint(1,100))


file.write('\n'.join(map(str,nums)))
file.close()



    
    

    
