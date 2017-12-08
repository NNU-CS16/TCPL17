/*将m二进制插入n*/
#include <stdio.h>
int bin_insert(int n, int m, int j, int i);

int main()
{
  int m, n, i, j;
  printf("请输入整数n m:");
  scanf("%d%d", &n, &m);
  printf("请输入插入位数j i:");
  scanf("%d%d", &j, &i);
  bin_insert(n, m, j, i);
  return 0;
}

int bin_insert(int n, int m, int j, int i)
{
  m = m << j;        //将m左移j位
  n = m | n;        //通过或运算实现m与n的二进制形式相加
  printf("%d", n);
}
