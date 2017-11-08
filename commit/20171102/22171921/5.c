#include<stdio.h>
#include<math.h>
int fac_bit_count(int n)
{
double pi=3.14159265359;
double e=2.718281828459;
int s=1;
if(n>3)
s=log10(2*pi*n)/2+n*log10(n/e)+1;
return s;
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",fac_bit_count(n));
return 0;
} 
