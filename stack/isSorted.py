def isSorted(arr):
    if (len(arr) == 1):
        return True
    subAns = isSorted(arr[1:])
    if subAns:
        if (arr[0]<arr[1]):
            return True
    return False
size = int(input("enter size of arr"))
arr = []
for i in range(size):
    arr.append(input(("enter" + str(i) + "element")))
print("array is sorted : " + str(isSorted(arr)))