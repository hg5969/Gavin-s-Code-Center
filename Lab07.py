def a(s):
    countC = 0
    vowels = ["A","E","I","O","U"," "]
    consonants = ["B","C","D","F","G","H","J","K","L","M","N","P","Q","R","S","T","V","W","X","Y","Z","b","c","d","f","g","h","j","k","l","m","n","p","q","r","s","t","v","w","x","y","z"]
    string = s.upper()
    print("Old String:",string)
    string2 = string[1:-1].upper()
    string3 = " "
    for i in string2.upper():
        if i in consonants:
            countC += 1
            string3 = string2.replace(i,"*")
    print("New String:",string3)
    print("Number of constant characters:",countC)
          
s = input("Enter a string: ")
a(s)
        
        

        
