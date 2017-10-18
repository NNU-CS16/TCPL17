#include <stdio.h>
int main()
{
  int x,y,a,b;
  for(x=1;x<=97;x+=3)
  a=x+1;
  b=x+2;
  y=x*a*b;
  printf("%d\n",y);
  return 0;
}

