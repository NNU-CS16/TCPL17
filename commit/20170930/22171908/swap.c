#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d,%d,%d",&a,&b,&x);
    x=b;
    a=x;
    b=a;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
