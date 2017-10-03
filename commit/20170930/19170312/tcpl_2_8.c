#include <stdio.h>
#include <math.h>
int i=0;
unsigned rightrot(unsigned x,int n)
{
    return (x & ~(~0<<n))<<(i-n) | (x>>n);
}
int main()
{
    unsigned x;
    int n;
    printf("Please enter the number of x,n.\n");
    scanf("%u%d",&x,&n);
    do
     i++;
    while (pow(2,i)<=x);
     printf("%u\n",rightrot(x,n));
    return 0;
}
