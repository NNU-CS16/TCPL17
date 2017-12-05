#include <stdio.h>
#include <math.h>
int bin_insert(int n, int m, int j, int i);

int main()
{
	int a, b, c, d, r;
	printf("please input a, b, c, d:\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	r = bin_insert(a, b, c, d);
	printf("%d\n", r);
	return 0;
}

int bin_insert(int n, int m, int j, int i)
{
	int p, q;
	int bin1[100], bin2[100];
	/*n的二进制的倒序数*/
	for (p = 0; n / 2 != 0; ++p)
	{
	  bin1[p] = n % 2;
	  n = n / 2;
	}
	bin1[p] = n;
	int len = p;
	/*m的二进制的倒序数*/
	for (q = 0; m/2 != 0; ++q)
	{
	  bin2[q] = m % 2;
	  m = m / 2;
	}
	bin2[q] = m;
	/*将m的二进制数插入到n得二进制数中*/
	for (p = j, q = 0; p <= i; ++p, ++q)
	  bin1[p] = bin2[q];
	int sum = 0, temp;
	for (p = 0; p <= len; ++p)
	{
	  temp = bin1[p] * pow(2, p);
	  sum = sum + temp;
	}
	return sum;
}
