#include<stdio.h>

int main()
{
int a,b,c,d,i,e,s=1;
scanf("%d%d%d",&a,&b,&d);
e=a+b;c=a+b;
for(i=0;c/d!=0;i++)
{c=c/d;s=s+1;}

int x[30],k;
for(k=0;(e/d)!=0;k++)
{x[k]=e%d;e=e/d;}
printf("%d",e);
int f;
for(f=1;f<s;f++)
printf("%d",x[s-f-1]);
return 0;
}
