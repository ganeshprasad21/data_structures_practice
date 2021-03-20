#include<iostream>
bool isSorted(int * arr,int size){
    if (size == 2 ) return arr[0]>arr[1] ? true : false; //base

    bool subArraState = isSorted(arr+1,size-1);
        if (subArraState){
            if (arr[0]>arr[1]){ //1st element in sub array and the element in normal array are in order
                return true;
            }
                return false;
        }
        return false;
}
int main() {
    int n;
    std ::cout<< "enter n i.e size of array that is to be chercked for order"<<std::endl;
    std::cin>>n;
    int * arr = new int[n];
    for(int i = 0 ; i < n ; i++){
        std :: cout<<"enter"<<i<<"element"<<std :: endl;
        std :: cin >> arr [i];
    }
    std:: cout<< isSorted(arr,n)<<std::endl;
    return EXIT_SUCCESS; 
}