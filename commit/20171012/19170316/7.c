#include<stdio.h>
int main()
{
int x,a,b,c;
printf("please input x which is a positive three digit number");
scanf("%d",&x);
c=x%10;
b=((x%100)-c)/10;
a=(x-b*10-c)/100;
printf("%d",c*100+b*10+a);
return 0;
}
