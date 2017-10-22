#include<stdio.h>
int main( )
{
int n,i=0,a[16];

scanf("%d",&n);
printf("%o\n",n);
printf("%x\n",n);


while(n>0)
{
a[i]=n%2;
n=n/2;
i++;
}
for(;i>0;i--)
printf("%d",a[i]);

return 0;
}
