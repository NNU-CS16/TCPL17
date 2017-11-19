#include <stdio.h>
int GCD_recursive(int x, int y);
int  LCM (int m, int n);
int main()
{
  int a, b, tem;
  scanf ("%d%d", &a, &b);
  if(b > a)
  tem = a,a = b,b = tem;
  printf ("%d",LCM(a,b));
  return 0;
}
int GCD_recursive(int x, int y)
 {
  if(y==0) return x;
  return GCD_recursive(y, x%y);
}
int  LCM(int m, int n)
{
  return (m*n)/GCD_recursive(m,n);
}
