#include <stdio.h>

int Count(int n);

int main()
{
	int n;
	printf("请输入1～1000的一个整数n：");
	scanf("%d", &n);
	printf("%d\n", Count(n));
}

int Count(int n)
{
	if(n <= 2)
		return 1;
	return (Count(n - 1) + Count(n - 2))%1000007;
}
