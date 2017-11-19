#include<stdio.h>
int is_pow2(int n)
{
int m,flag=0;
for(m=1;m<=n;m<<=1)
{
if(m==n)
{flag=1;return 0;}
}
if(flag==0)
return -1;
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",is_pow2(n));
return 0;
}
