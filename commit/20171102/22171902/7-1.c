#include<stdio.h>
int GCD_recursive(int m, int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",GCD_recursive(m,n));

	return 0;
}

int GCD_recursive(int m, int n)
{
	int r=m%n;
	while (r != 0);
	{
	m = n;
	n = r;
	r = m%n;
	}
	return n;
}
#include<stdio.h>
int GCD_recursive(int m, int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",GCD_recursive(m,n));

	return 0;
}

int GCD_recursive(int m, int n)
{
	int r=m%n;
	while (r != 0)
	{
	m = n;
	n = r;
	r = m%n;
	}
	return n;
}



