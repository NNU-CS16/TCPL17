#include <stdio.h>
int GCD_recursive(int m, int n);
int GCD_iterative(int x, int y);
int main()
{
  int a b, tem;
  scanf ("%d%d",&a,&b);
  if(b > a)
  tem = a,a = b,b = tem;
  printf("%d %d\n",GCD_recursive(a,b), GCD_iterative(a,b));
  return 0;
}
int GCD_iterative(int m, int n)
{
  while (1)
  {
     m = m % n;
     if (m == 0)
     {
        return n;
        break;
      }
     n = n % m;
     if(n == 0);
     { 
       return m;
       break;
      }
  }
}
int GCD_recursive(int x,int y)
{
  if (y == 0) return x;
  return GCD_recursive(y, x % y);
}

