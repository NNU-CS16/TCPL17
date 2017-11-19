/*汉诺塔加强版*/
#include <stdio.h>
int Hanoi(int n);

int main()
{
  int n;
  printf("请输入正整数n:");
  scanf("%d", &n);
  printf("最少移动次数为%d\n", Hanoi(n));
  return 0;
}

int Hanoi(int n)
{
  if (n == 1)
	 return 2;
  return 2 * Hanoi(n - 1) + 2;
}
