#include<stdio.h>
#include<stdlib.h>
int sum(int x){
if (x == 0)
return 0;
if (x > 0)
return x + sum(x-1);
}
double factorial(double x){
if (x  == 0){
return 1;}
if (x > 1)
return x * factorial (x-1);

}
int taylorseries(int x, int y){
if (y==1)
return 1;
if(y>1)
return power(x,y)/factorial(y) + taylorseries(x,y-1);
}
int power(int z ,int n){
if (n == 0)
return 1;
return power(z,n-1)*z;}
void main(){
printf("%ld yes",taylorseries(5,100));
}

