#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    for(int position = 1; position <= size-1 ; position++ ){
        int value = arr[position];
        int compareAndSwapPosition = position-1;
        while(compareAndSwapPosition >= 0){
            if (arr[compareAndSwapPosition]<value){
                arr[compareAndSwapPosition + 1] = arr[compareAndSwapPosition];arr[compareAndSwapPosition] = value;
            }else{
                return;
            }
            compareAndSwapPosition--;
        }
    }
} 
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    insertionSort(arr,10);
    for(int i = 0; i < 10; i++){
        cout<<arr[i];
    }
}