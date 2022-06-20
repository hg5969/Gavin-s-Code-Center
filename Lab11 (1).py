nf = open("number.txt",'r')

negativeCount = 0
positiveCount = 0
oddCount = 0
negativeSum = 0
positiveSum = 0

for lines in nf:
    currentline = lines.split()
    num = int(currentline[1])
    if num < 0:
        negativeCount += 1
        negativeSum = negativeSum + num
        if num % 2 != 0:
            oddCount += 1
    elif num > 0:
        positiveCount += 1
        positiveSum = positiveSum + num
        if num % 2 != 0:
            oddCount += 1
print("negative count =",negativeCount)
print("odd count =",oddCount)
print("negative sum =",negativeSum)
print("positve average =",float(positiveSum / positiveCount))



        

    

    



    


    
    
    
    
    
    
