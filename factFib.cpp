#include <iostream>

int fact (int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fact(n-1)* n;
}
int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fib(n-1)+fib(n-2);
    
}
int main()
{
    std::cout<<fact(5)<<std::endl;
    std::cout<<fib(6)<<std::endl;
    return 0;
}