#include<stdio.h>
int is_int_pal(long int n)
{
long int sum=0, m;
 m = n;
 while(m/10 != 0)
{
  sum = sum*10 + m%10;
  m = m/10;
}
  sum = sum*10 + m;
 if(sum == n)
   return 0;
 else
   return -1;
}
int main()
{
long int n;
scanf("%ld",&n);
if(is_int_pal(n)==0)
 printf("是回文数");
else
 printf("不是回文数");
 return 0;
}
