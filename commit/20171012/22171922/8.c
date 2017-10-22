#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  b=a%16;
  c=a/16*10+b;
  printf("%d\n",c);
  return 0;
}
