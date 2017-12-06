#include <stdio.h>
int sum(int n)
{
	int m = 1;
	(n > 1) && (m = sum(n - 1) + n);
	return m;
}

int main()
{
	int n;
	printf("请输入n=");
	scanf("%d",&n);
	printf("1+2+...+%d=%d\n",n,sum(n));
	return 0;
}
