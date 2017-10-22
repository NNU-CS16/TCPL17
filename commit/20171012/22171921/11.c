#include<stdio.h>
#include <math.h>
int sum(int a,int b,int c,int d)
{
printf("%d",a*100+b*10+c);
printf("%d",a*100+b*10+d);
printf("%d",a*100+c*10+b);
printf("%d",a*100+c*10+d);
printf("%d",a*100+d*10+b);
printf("%d\n",a*100+d*10+c);
}
int main()
{
int a,b,c,d,t;
scanf("%d",&a);
b=a+1;
c=b+1;
d=c+1;
sum(a,b,c,d);
t=a;a=b;b=t;sum(a,b,c,d);
t=a;a=c;c=t;sum(a,b,c,d);
t=a;a=d;d=t;sum(a,b,c,d);
return 0;
}
