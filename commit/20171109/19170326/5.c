#include<stdio.h>

int A(int n)
{
	if(n==1)
		return 2;
	else
		return A(n-1)+2+A(n-1);
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",A(n));
	return 0;
}
