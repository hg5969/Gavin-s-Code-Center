file1 = open("thisFile.txt",'r')
file2 = open("thatFile.txt",'w')
count = 0


for line in file1:
    count += 1
    if count % 2 != 0:
        file2.write(line)


file1.close()
file2.close()
