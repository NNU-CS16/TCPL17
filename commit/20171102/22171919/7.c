#include <stdio.h>

int GCD_recursive(int m, int n)
{
	if (m % n > 0)
		return GCD_recursive( n, m % n );
	else
		return n;
}

int GCD_iterative(int m, int n)
{
	int temp = m % n ;
	while ( temp != 0)
	{
		m = n ;
		n = temp ;
		temp = m % n ;
	}
	return n ;
}

int main()
{
	int m ,n ,temp;
	scanf("%d%d",&m,&n);
	if ( m < n)
	{
		temp = m ;
		m = n ;
		n = temp ;
	}
	printf("%d %d",GCD_recursive(m,n),GCD_iterative(m,n));

	return 0;
}
