def stateTax(m):
    state = m * 0.04
    return state
def countyTax(m):
    county = m * 0.02
    return county
def totalTax(stateTax,countyTax):
    total = stateTax(m) + countyTax(m)
    return total
m = float(input("Enter the total sales for the month: "))
print("Monthly sales:","$",m)
print("State tax:","$",stateTax(m))
print("County tax:","$",countyTax(m))
print("Total tax:","$",totalTax(stateTax,countyTax))
