#include<stdio.h>
int main()
{
  int x,a,b,c;
  scanf("%d",& x);
  a=x%10;
  b=x%100/10;
  c=x/100;
  printf("%d",a*100+b*10+c);
  return 0;
}  
