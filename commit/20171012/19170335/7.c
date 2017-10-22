#include<stdio.h>
int main()
{
    int n,a,b,c,m;

    scanf("%d",&n);

    a=n%10;
    b=(n-a)/10%10;
    c=(n-b*10-a)/100;

    m=a*100+b*10+c;


    printf("%d\n",m);
    return 0;
}
