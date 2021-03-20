#include<iostream>
int fib(int n,int * fibonacciArr){ //using memoizat
    if (n == 0 or n == 1) {
        return fibonacciArr[n]; //actually not needed as the base cases are initialized in array
    }
    if(fibonacciArr[n] == -1){
        fibonacciArr[n] = fib(n-1,fibonacciArr) + fib(n-2,fibonacciArr);
    }
    return fibonacciArr[n];
}
int main () {
    std::cout << "enter the number to find fib (number)"<<std::endl;
    int n;
    std::cin>>n;
    int * fibonacciArr = new int[n+1];


    for(int i = 0 ; i < n+1 ; i++)
        fibonacciArr[i] = -1;
    fibonacciArr[0] = 0;
    fibonacciArr[1] = 1;

    std::cout<<fib(n,fibonacciArr)<<std::endl;
    for(int i = 0 ; i < n ; i++){
        std::cout<<fibonacciArr[i]<<std::endl;
    }
    return EXIT_SUCCESS;
}
/* thank
you */