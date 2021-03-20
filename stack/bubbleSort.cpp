#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    int sweepCount = size-1;
    while(sweepCount >=1){
        int i = 0;
        while(i<sweepCount){
            if(arr[i]<arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            i = i+1;
        }
        sweepCount = sweepCount - 1;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    bubbleSort(arr,7);
    for (int i = 0 ; i < 7; i++){
        cout<<arr[i];
        cout<<"hi";
    }
}