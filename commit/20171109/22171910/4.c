/*台阶问题2*/
#include <stdio.h>
int step(int n, int k);

int main()
{
  int n, k;
  int i, j, a[100005];
  printf("请输入台阶级数N 每次最多向上台阶数K:");
  scanf("%d%d", &n, &k);
  a[0] = 1;
  for (i = 1; i <= n; i++)
	  for (j = 1; j <= k && j <= i; j++)
	  a[i] = (a[i] % 100007 + a[i - j] % 100007) % 100007;
  printf("%d\n", a[n]);
  return 0;
}
