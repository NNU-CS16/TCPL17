#include<stdio.h>
int main()
{
    int x=105,p=5,n=3,a;
    a= x ^ (~(~0<<n) << (p-n+1));  
    printf("%d\n",a);
    return 0;
}
