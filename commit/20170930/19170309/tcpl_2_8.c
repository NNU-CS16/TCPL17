#include<stdio.h>
int main()
{

int x,n,y;
    x= 30;
    n= 2;
    y= ((x & (~ (~0<<n)))<<(64-n))|(x>>n);
printf("%d\n", y);
return 0;
}
