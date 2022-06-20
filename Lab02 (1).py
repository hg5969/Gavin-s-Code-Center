#Falling Distance Problem
t = float(input("Enter a time (in seconds) "))
g = 9.8
def myFunction():
    results = 0.5 * g * t ** 2
    return results

print("Falling Distance for an object that has been falling for 10 seconds is",myFunction(),"meters")

#Future Value Problem
P = float(input("Enter present value "))
i = float(input("Enter interest rate "))
t = float(input("Enter number of months "))
def futureValue():
    F = P * (1 + i) ** t
    return F

print("The information for your account is:")
print("Present value: $",P)
print("Interest rate: %",i)
print("After 18 months, the value of your account will be $",futureValue())
