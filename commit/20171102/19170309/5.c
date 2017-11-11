#include<stdio.h>
int fac_bit_count(int n);
int main()
{

int n;
scanf("%d", &n);
printf("%d\n", fac_bit_count(n));

return 0;
}

int fac_bit_count(int n)
{
int i,a=1,b;
for(i=1;i<=n;i++)
   a*=i;
for(i=1;a>=10;i++)
  { b=a%10;
   a/=10;}
return i;
}
