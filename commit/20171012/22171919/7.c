#include<stdio.h>
int main()
{
int a,b,c,e,f;
printf("a=");
scanf("%d",&a);
b=a/100;
c=(a%100)/10;
e=(a%100)%10;
f=e*100+c*10+b;
printf("%d\n",f);
return 0;
}
