#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,m,n;
printf("a,b,c:");
scanf("%d %d %d",&a,&b,&c);
m=pow(a,b);
n=m%c;
printf("%d^%dmod%d=%d",a,b,c,n);
return 0;
}
