def printUpto(n) :
    if n == 0: #case when 0 just return
        return

    printUpto(n-1) # print upto n-1

    print(n) #and print  n 
    


n = int(input("enter the number until which you have to print:"))
printUpto(n)