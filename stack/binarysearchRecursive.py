def binSearch(arr,si,ei,element):
    if si > ei:
        return -1
    mid = (si+ei)//2
    if (arr[mid] == element):
        return mid;
    elif ( arr[mid] > element):
        return binSearch(arr,si,mid-1,element)
    else:
        return binSearch(arr,mid+1,ei,element)
arr = []
for i in range(10000000000000):
    arr.append(i)
print(binSearch(arr,0,len(arr)-1,201))

    
    