#include<stdio.h>
int main(void)
{
    int a=1,b=2,c=3,k;
    for(a=1,b=2,c=3;a<=97,b<=98,c<=99;a+=3,b+=3,c+=3)
{
    k+=a*b*c;
}

    printf("%d",k);
    return 0;
}
 
