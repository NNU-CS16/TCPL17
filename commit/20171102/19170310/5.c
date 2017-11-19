#include<stdio.h>
int fac_bit_count(int n)
{
int count=1;
int i;
i=n-1;
for(i=n-1;i>1;i--)
 {
  n=n*i;
  if(n>9)
  {
   count++;
   n=n/10;
  }
 }
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",fac_bit_count(n));
return 0;
}












