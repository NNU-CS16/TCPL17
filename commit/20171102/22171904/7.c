#include <stdio.h>

int GCD_recursive(int m, int n)
{
	if(n==0)
		return m;
	else
	return GCD_recursive(n,m%n);
}

int GCD_iterative(int m,int n)
{
	int t;
	while(n!=0)
	{
		t=m%n;
		m=n;
		n=t;
	}
	return m;
}

int main()
{
	int m,n;
	printf("请输入m,n的值:");
	scanf("%d %d",&m,&n);
	printf("%d %d",GCD_recursive(m,n),GCD_iterative(m,n));
	return 0;
}

