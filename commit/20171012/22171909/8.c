#include <stdio.h>
int main()
{
  int x,y,n;
  printf("输入一个数=");
  scanf("%d",&n);
  x= n % 16;
  y= n / 16 * 10 + x;
  printf("y=%d\n",y);
  return 0;
}
