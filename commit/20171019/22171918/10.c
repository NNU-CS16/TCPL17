#include <stdio.h>
#include <math.h>
int main ()
{
  int a,b,c,d,e;
  scanf("%d%d%d",&a,&b,&c);
  d=pow(a,b);
  e=d%c;
  printf("a的b次方除以c的余数为%d\n",e);
  return 0;
}
