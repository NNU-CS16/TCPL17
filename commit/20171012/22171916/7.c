#include<stdio.h>
int main()
{
int a,b,c,m,n;
scanf("%d",&m);
a=m/100;
b=(m-a*100)/10;
c=m-a*100-b*10;
n=c*100+b*10+a*1;
printf("%d\n",n);
return 0;

}
