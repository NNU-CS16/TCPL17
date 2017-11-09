#include<stdio.h>
int is_prime(int);

int main()
{
int a[2000];
int m=3,n=0,i,j=0;
for(i=0;i<2;i++)
a[i]=i+2;
while(m<8000)
{
if(is_prime(m)==0)
{a[i]=m;i++;m++;continue;}
else
{m++;continue;}
if(i==999)
break;
}
for(i=100;i<=1000;i++,n++)
{
if(n&&n%9==0)
printf("\n");

printf("%d",a[i]);
printf("\t");
}
printf("\n");
return 0;
}

int is_prime(int n)
{
int i;
for(i=2;i<=n-1;i++)
   if(n%i==0)
   break;

if(i<n)
return -1;
else
return 0;
}
