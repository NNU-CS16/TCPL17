#include <stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  printf("%d\n",x%16+x/16*10);
  
  return 0;
}
