file = open("number.txt","r")
file.read()
negativecount = 0
oddcount = 0
negativesum = 0
positivecount = 0
positivesum = 0

for line in file:
    if line != "\n":
        line = line.strip().split()
        number = int(line)
        if number < 0:
            negativecount += 1
            negativesum += number
            if number % 2 != 0:
                oddcount += 1
        else:
            positivecount += 1
            positivesum += number
            if number % 2 == 1:
                oddcount += 1
print("negative count =",negativecount)
print("odd count =",oddcount)
print("negative sum =",negativesum)
print("positive average ="+ str(positivesum/positivecount))
