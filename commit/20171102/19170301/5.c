#include<stdio.h>
#include<math.h>
int fac_bit_count(int n)
{ 
int i;
double a;
a = 0;
for(i = 1;i <= n;i ++)
{
   a = a + (log10(i));
}
  a = a + 1;
 printf("%d\n",(int)a);
 return a;
}
int main()
{
 int n;
 scanf("%d",&n);
 fac_bit_count(n);
 return 0;
}
