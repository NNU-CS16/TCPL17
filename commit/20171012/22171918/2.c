#include <stdio.h>
int main()
{
  int x,y;
  for(x=1;x<=97;x+=3)
  y=y+x*(x+1)*(x+2);
  printf("%d\n",y);
  return 0;
}

