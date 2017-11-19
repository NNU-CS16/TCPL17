/*台阶问题1*/
#include <stdio.h>
int step(int n);

int main()
{
  int n;
  printf("请输入走上的台阶数n(n >= 2):");
  scanf("%d", &n);
  printf("上台阶的走法为:%d\n", step(n));
  return 0;
}

int step(int n)       //设置函数进行计算
{
  if (n <= 3)
     return n - 1;  //n等于2或3时直接输出
  return (step(n - 1) + step(n - 2)) % 100007;  //n大于3时进入运算(取余)
}
