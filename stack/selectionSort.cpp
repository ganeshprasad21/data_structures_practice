#include<iostream>
using namespace std;
void selectionSort(int arr[] , int size){
    for ( int i = 0; i < size+1 ; i++){
        for(int j = i+1 ;j<size ; j++){
            if (arr[i]>arr[j]){
                int temp = arr [i];
                arr [i] = arr [j];
                arr [j] = temp; 
            }
        } 
    }
}
int main() {
    int arr [] = {1,21,111112,62,4,5,8 };
    selectionSort( arr , 7);
    for ( int i = 0 ; i < 7 ; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}