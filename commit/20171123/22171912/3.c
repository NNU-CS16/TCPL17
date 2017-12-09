/*3.c_1～n求和*/
#include <stdio.h>

int sum(int n);

int main()
{
	int n;
	printf("请输入正整数n：");
	scanf("%d", &n);
	printf("%d\n", sum(n));
	return 0;
}

int sum(int n)
{
	int s = 0;
	n && (s = n + sum(n - 1));
	return s;
}
