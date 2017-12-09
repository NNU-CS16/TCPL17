/*实现1+2+3+…+n*/
#include <stdio.h>
int sum(int n);

int main()
{
  int n;
  printf("请输入正整数n:");
  scanf("%d", &n);
  printf("%d", sum(n));
  return 0;
}

int sum(int n)
{
  n && (n = n + sum(n - 1));
  return n;
}
