#include<math.h>
#include<stdio.h>
int main()
{
  int x,y,a,b,c;
  x=4;
  a=4;
  b=2;
  c=1;
  if (sqrt(abs(x))!=(4*a)/(b*c))
    y=1;
  else
    y=0;
  printf("y=%d\n",y);
  return 0;
}
