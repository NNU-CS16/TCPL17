#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d",&x);
if(x<=153,x>=0)
{
y=x/16;
z=x%16;
printf("%d",y*10+z);
}
else
printf("please input 0=<x<=153");
return 0;
}
