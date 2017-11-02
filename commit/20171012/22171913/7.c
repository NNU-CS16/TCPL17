#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%3d",&a);
		    
    b=a/100;
    c=(a-b*100)/10;
    d=a%10;
    n=d*100+c*10+b;
    printf("%d",n);
    return 0;
}
