def replacepi(string):
    if (len(string)== 0 or len(string) == 1):
        return string
    if (string[0:2]=="pi"):
        subAnswer = "3.14" + replacepi(string[2:])
    else:
        subAnswer = string[0:2] + replacepi(string[2:])
    return subAnswer
print(replacepi(input("enter string\n")))
