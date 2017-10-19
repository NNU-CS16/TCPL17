#include<stdio.h>
int main()
{
  int a,b,x;
  scanf("%d",&x);
  a=x%16;
  b=x/16*10+a;
  printf("%d",b);
  return 0;
}
