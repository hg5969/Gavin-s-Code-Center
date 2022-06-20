import random
def three_heads():
    s = ""
    while 1:
        x = random.randint(1,2)
        if x == 1:
            s += "H "
        if x == 2:
            s += "T "
        if "H H H" in s:
                break
    print(s,"\nThree heads in a row!")
    
        

        
three_heads()
    
        
        
