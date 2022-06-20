firstD = {'Janet':87,'Logan':62,'Whitaker':46,'Alyssa':100,'Stef':80,'Jeff':88,'Kim':52,'Sylvia':95}
secondD = {'Logan':62,'Kim':52,'Whitaker':52,'Jeff':88,'Stef':80,'Brian':60,'Lisa':83,'Sylvia':87}
print(firstD)
print(secondD)

def intersect(dict1,dict2):
    n = {i:dict1[i] for i in dict1 if i in dict2 and dict1[i] == dict2[i]}
    return(n)

m = intersect(firstD,secondD)

print("The same values in both dictionaries are:",m)
