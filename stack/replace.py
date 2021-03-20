def replace(a,b,string):
    if (len(string) == 1):
        if (string == a):
            string = b
        return string
    if (string[0] == a):
        subAnswer = b + replace(a,b,string[1:])
    else:
        subAnswer = string[0] + replace(a,b,string[1:])
    return subAnswer
inputString = input("enter your string \n")
what = input("a\n")
bywhat = input("b\n")
print(replace(what,bywhat,inputString))