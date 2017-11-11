#include<stdio.h>
int GCD_iterative (int m, int n)
{
    int r = 0;
    r = m%n;
	if (r == 0)
	return n;
	else
	{   
		m = n;
		n = r;
		GCD_iterative (m, n);
	}
}
int main()
{
	int m = 0; int n = 0;
	scanf("%d%d", &m, &n);
	printf("%d",GCD_iterative (m, n));
	return 0;
}

