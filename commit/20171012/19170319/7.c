#include<stdio.h>
int main()
{
  int x,a,b,c,y;
  scanf("%d",&x);
  a=x/100;
  c=x%10;
  b=x%100/10;
  y=c*100+b*10+a;
  printf("%d",y);
  return 0;
}
