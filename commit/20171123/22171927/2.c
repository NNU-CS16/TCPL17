#include <stdio.h>
int bin_insert(int n, int m, int j, int i);
int main()
{
	int n,m,j,i;
	int sum;
	printf("Please input n,m,j,i:");
	scanf("%d%d%d%d",&n,&m,&j,&i);
	sum = bin_insert(n,m,j,i);
	printf("%d\n",sum);
	return 0;
}

int bin_insert(int n, int m, int j, int i)
{
	int a[32],b[i-j+1];
	int q,l,p;
	for (p = 0; p < 32; p++)
		a[p] = 0;
	for (p = 0; p < i-j+1; p++)
		b[p] = 0;
	for (p = 0; n > 0; p++)
	{
		a[p] = n%2;
		n = n/2;
	}
	for (p = 0; m > 0; p++)
	{
		b[p] = m%2;
		m = m/2;
	}
	for (p = 0; j <= i; j++)
	{
		a[j] = b[p];
		p++;
	}
	q = 1;
	l = 0;
	for (p = 0; p < 32; p++)
	{
		l = l + a[p] * q;
		q = q * 2;
	}
	return l;
}
	

