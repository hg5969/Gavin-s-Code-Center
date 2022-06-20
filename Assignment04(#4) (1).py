file = input("Enter the name of a file: ")
file = open(file,'r')
file = file.read()
file2 = open("words2.txt",'w')
file2.write("{0:12s}{1:12s}\n".format("letter","count"))
d = {}

for i in 'abcdefghijklmnopqrstuvwxyz':
    d[i] = 0
    
    for line in file:
        if i in line:
            d[i] += 1
        
        
    file2.write("{0:12s}{1:0n}\n".format(i,d[i]))

file2.close()

