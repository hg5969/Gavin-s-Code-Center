string = input("Enter a string: ")
upper = set(string.upper())
max = 0
fav = ''
for u in upper:
    c = string.upper().count(u)
    if c > max and u.isalpha():
        max = c
        fav = u
print("The character that appears most frequently in the string is",fav)
