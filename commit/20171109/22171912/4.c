/*4.c_台阶加强版*/
#include <stdio.h>

int Count(int n);

int main()
{
	int n, k, C;
	printf("请输入台阶数n（1～1000）：");
	scanf("%d", &n);
	printf("请输入最大步数k（1～100）：");
	scanf("%d", &k);
	printf("%d\n", Count(n));
	return 0;
	
}

int Count(int n)
{
	int k, C;
	if (n <= 2)
		return 1;
	for ( ; k > 1; k--)
		C = (Count(n - k) + Count(n - k + 1)) % 100007;
}
