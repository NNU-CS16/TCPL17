#include<stdio.h>
int main()
{
    unsigned int x,a,b;
    scanf("%u",&x);

    a=x>>4;
    b=(x<<28)>>28;

    printf("%u\n",a*10+b);
   
    return 0;
}
