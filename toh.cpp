#include <iostream>
/*
\------s----------a----------d---------\
*/
void toh(int howManyDisks,int source,int aux,int dest)
{
    if(howManyDisks > 0)
    {
        toh(howManyDisks-1,source,dest,aux);
        std::cout<<"moving disk from - "<<source<<" to - "<<dest<<": using aux as -> "<<aux<<std::endl;
        toh(howManyDisks-1,aux,source,dest);
    }
}
int main()
{
    toh(2,1,2,3);
    return 0;
    return 0;
}