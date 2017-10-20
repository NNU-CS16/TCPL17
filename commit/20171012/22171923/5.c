#include<stdio.h>
int main(void)
{
  int a,b,y;
  y=0;
  for(a=1;a<=9;a++)
    for(b=1;b<=9;b++)
  {
    y=a*b;
    printf("%d*%d=%d\t",a,b,y);
  }
  printf("\n");

  return 0;
}
