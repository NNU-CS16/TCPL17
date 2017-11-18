#include<stdio.h>

int A(int n)
{
	if(n==1)
		return 2;
	else
		return 3*A(n-1)+2;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",A(n));
	return 0;
}
