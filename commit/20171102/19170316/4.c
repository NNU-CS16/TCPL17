#include<stdio.h>
int count1_in_bin(int n)
{
int i=0,a[32],m;
while(n>1)
{a[i]=n%2;i=i+1;n=n/2;}
int s=0;
for(m=0;m<=i;m++)
{if(a[m]==1)
s=s+1;}
printf("%d",s+1);
}
int main()
{
int n;
scanf("%d",&n);
count1_in_bin(n);
return 0;
}
