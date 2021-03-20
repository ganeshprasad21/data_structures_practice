def merge(arr,si,ei):
    s = []
    mid = (si+ei)//2
    i,j = si,mid+1
    for x in range(mid):
        if (arr[x] > arr[mid+x]):
            s.append(arr[x]) 
        s.append(arr[mid+x])
def mergeSort(arr,si,ei):
    if(si >= ei):
        return
    mid = (si+ei)//2
    mergeSort(arr,si,mid)
    mergeSort(arr,mid+1,ei)
    merge(arr,si,ei)
