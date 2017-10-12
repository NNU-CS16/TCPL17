#include <stdio.h>
int main()
{
  int x;
  int y;
  printf("x= ");
  scanf("%d",&x);
  y=x*x*x+2*x*x+3*x+1;
  printf("y=%d\n",y);

  return 0;
}
