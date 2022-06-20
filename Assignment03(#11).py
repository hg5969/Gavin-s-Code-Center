dct = {'CS101':3004,'CS102':4501,'CS103':6755,'NT110':1244,'CM241':1411}
dct2 = {'CS101':'Haynes','CS102':'Alvarado','CS103':'Rich','NT110':'Burke','CM241':'Lee'}
dct3 = {'CS101':'8:00 a.m.','CS102':'9:00 a.m.','CS103':'10:00 a.m.','NT110':'11:00 a.m.','CM241':'1:00 p.m.'}
course = input("Enter a course number: ")
if course not in dct:
    print(course,"is an invalid course number.")
else:
    print("The details for course",course,"are:")
    print("Room:",dct[course])
    print("Instructor:",dct2[course])
    print("Time:",dct3[course])
