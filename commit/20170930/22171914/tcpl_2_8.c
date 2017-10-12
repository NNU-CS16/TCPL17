#include <stdio.h>

void show(unsigned x,int step)
{
     if(step<31)
     show(x>>1, step+1);
     printf("%d\n",x&1);
}
unsigned rightrot(unsigned x,int n)
{
         return(x<<(32-n))|(x>>n);
}
int main()
{
    unsigned x=12345;
    show(x,0);
    printf("\n");
    show(rightrot(x,11),0);
    printf("\n");
    return 0;
}
