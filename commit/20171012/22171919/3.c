#include<stdio.h>
int main()
{
int a,n,x=0,y=0,i;
printf("a=  n=");
scanf("%d%d",&a,&n);
for(i=1;i<=n;i++)
{
x=x*10+a;
y+=x;
}
printf("%d\n",y);
return 0;
}
