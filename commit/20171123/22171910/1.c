/*最大奇约数之和*/
#include <stdio.h>
#include <math.h>
int div(int n);

int main()
{
  int m = 0, n, i;
  printf("请输入正整数N(1 <= N <= 1000000000):");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)    //求各位数的最大奇数约数之和
      m = m + div(i);
  printf("%d", m);
  return 0;
}

int div(int n)              //返回某数的最大奇数约数
{
  int i, j;
  for (i = n; i > 0; i--)
  {
    if (n % i == 0 && i % 2 == 1)
       break;
  }
  return i;
}
