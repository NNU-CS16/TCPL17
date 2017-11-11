#include <stdio.h>
int LCM(int m, int n)
{
  int c;
  while (b > 0)
  {
  c = a % b;
  a = b;
  b = c;
  }
  return a;
}
int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=gcd(a,b);
  printf("最大公约数=%d,最小公倍数=%d.\n",c,(a*b)/c);
return 0;
}
