#include<iostream>
int fact (int n) {
    if (n == 0) {
        return 1;
    }
    int answer = n * fact(n-1); // leap of recursion babe!
    return answer;
}
int main () {
    int n;
    std::cout<<"enter the number to find its factorial :"<<std::endl;
    std::cin>>n;
    std::cout<<fact(n)<<std::endl;
    return EXIT_SUCCESS;
}