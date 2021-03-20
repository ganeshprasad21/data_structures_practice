#include<iostream>
int findIndex(int indexStart,int * arr , int size,int valToFind){
    //returns -1 if not present or inx
    if (size == 2){
        if (arr[0] == valToFind){ // base case
            return indexStart;
        }
        else if (arr[1] == valToFind){
            return indexStart + 1;
        }
        return -1;
    }
        if(arr[0] == valToFind){ // small work before recurs
            return indexStart;
        }
    int index = findIndex(indexStart+1,arr+1,size-1,valToFind); 
    if (index != -1){
            return index;
    }
    return -1;
    return -1;

    }
int findLastIndex(int finalIndex,int * arr,int valToFind,int size){
    if (size == 2){
        if (arr[1] == valToFind){
            return finalIndex;
        }
        if (arr[0] == valToFind){
            return finalIndex -1;
        }
        return -1;
    }
    if (arr[finalIndex] == valToFind){
        return finalIndex;
    }
    int index = findLastIndex(finalIndex-1,arr,valToFind,size-1);

    if ( index != -1){
        return index;
    }
    return -1;

}
int main(){
    int arr[] = {1,1,1,1,6,5,6,7,8,1,1};
    std :: cout<<"enter the element to be searched"<< std :: endl;
    int s;
    std :: cin >> s;
    std :: cout<<findIndex(0,arr,sizeof(arr)/sizeof(int),s) << std :: endl;
    std :: cout<<findLastIndex(10,arr,s,sizeof(arr)/sizeof(int)) << std :: endl;

}

/*
use this method first write the recurranve relation then write base case then go with addditiional work */