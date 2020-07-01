#include<stdio.h>
 double taylor(int x,int n)
    {
        static double power =1 ;
        double ans;
        static double factor = 1;
        if (n <= 0)
        {
            return 1;
        }
        ans = taylor(x,n-1);
        power = power *x;
        factor = factor *n;
        return (ans+(power/factor)); 
        
    }
int main(void)
{
    double ans =taylor (5,5);
    printf("%lf",ans);
    return 0;
}