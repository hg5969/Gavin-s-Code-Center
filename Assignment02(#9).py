s = input("Enter a string: ")
def function(string):
    string = string.lower()
    vowels = 0
    consonants = 0
    for c in string:
        if c in 'aeiou':
            vowels += 1
        elif c >= 'a' and c <= 'z':
            consonants += 1
    print("The string you entered includes",vowels,"vowels and",consonants,"consonants.")
    
            
function(s)

