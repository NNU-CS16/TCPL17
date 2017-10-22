#include <stdio.h>
int main()
{int a,b;
  scanf("%d",&a);
  b=a;
  a=a%16;
  b=(b-a)/16*10;
  printf("%d\n",a+b);
  return 0;
}
