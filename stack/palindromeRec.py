string = input("enter the string to be checked if itss a palindrome or not")
print(string[1:-1])
def isPalindrome(string):
    print("calling on string:" + string)
    if (len(string) == 0 or len(string) == 1):
        return True
    if (len(string) >2):
        if(string[0] == string[-1]):
            partialAnswer = isPalindrome(string[1:-1])
            if partialAnswer:
                return True
        return False
    if (len(string) == 2): #redundant but here for clarity
        if ( string[1] == string [0]):
            return True
        return False
print(isPalindrome(string))