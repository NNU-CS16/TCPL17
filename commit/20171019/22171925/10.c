#include <stdio.h>
#include <math.h>
int main()
{ int x,y,c,b;
  scanf("%d%d%d",&x,&y,&c);
  b=pow(x,y);
  printf("%d\n",b%c);
  return 0;
  

}
