#include <stdio.h>
int GCD_recursive(int m, int n)
{
	if (m % n > 0)
		return GCD_recursive( n, m % n );
	else
		return n;
}

int LCM(int m, int n)
{
	int x ;
	x = m * n / GCD_recursive( m, n );
	return x ;
}

int main()
{
	int m,n;
	printf("请输入两个整数");
	scanf("%d%d",&m,&n);
	printf("这两个数的最小公倍数为%d\n",LCM(m,n));
	return 0;
}
