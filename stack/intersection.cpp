//merge sort too
#include<iostream>
#include<vector>
using namespace std;
void mer(int a[],int si,int mid,int ei){
    int sOfL = mid -si + 1;
    int sOfR = ei - mid;
    int l[sOfL];
    int r[sOfR];
    for(int i = 0 ;i< sOfL; i++ ) {
        l[i] = a[si+i];
    }
    for(int j = 0 ;j< sOfR; j++ ) {
        r[j] = a[mid+1+j];
    }
    int eleInL = 0;
    int eleInR = 0;
    int indexCopiedSoFar  = si;
    while(eleInL < sOfL  && eleInR < sOfR){
        if (l[eleInL] <= r[eleInR]){
            a[indexCopiedSoFar] = l[eleInL];
            eleInL++;
        }
        else {
            a[indexCopiedSoFar] = r[eleInR];
            eleInR++;
            
        }
        indexCopiedSoFar++;
    }
            while(eleInL < sOfL ){
                a[indexCopiedSoFar] = l[eleInL];
                indexCopiedSoFar++;
                eleInL++;
            }
            while(eleInR < sOfR) {
                a[indexCopiedSoFar] = r[eleInR];
                indexCopiedSoFar++;
                eleInR++;
            }

}
void merSort(int a[],int si,int ei){
    if(si >= ei){
        return;
    }
    int mid = si + (ei-si)/2;
    merSort(a,si,mid);
    merSort(a,mid+1,ei);
    mer(a,si,mid,ei);
}
int binarySearch(int arr[],int value,int si,int ei){
    int mid = (si+ei)/2;
    if(ei >= si){
        if(arr[mid] == value){
            return mid;
        }
            
    if (arr[mid] > value)
        return binarySearch(arr,value,si,mid-1);
    return binarySearch(arr,value,mid+1,ei);
    }
    return -1;
    }
void findIntersection(int a[],int sizeOfA,int b[],int sizeOfB){
    int intersectionVector[10] = {0,0,0,0,0,0,0,0,0,0};
    int j = 0;
    for(int i = 0 ; i < sizeOfA ; i++){
        int index = binarySearch(b,a[i],0,sizeOfB-1);
            if (index != -1){
                intersectionVector[j] = a[i];
            j++;
            }   
    }
    for(int i = 0 ; i < j ; i++){
        cout << intersectionVector[i]<<",";
    }

}
int main(){
    int a[] = {10,8,91,71,6,51,4,3,2,1};
    int  b[] = {10,9,11,7,12,14,4,3,2,1};
    merSort(a,0,9);
    for(int i = 0 ; i < 10; i++){
    }
    cout << " b \n";
    //return EXIT_SUCCESS;
    merSort(b,0,9);
    for(int j = 0 ; j < 10; j++){
        cout << b[j] << endl;
    }
    cout<<binarySearch(b,a[0],0,9);
    findIntersection(a,10,b,10);
    return EXIT_SUCCESS;
}