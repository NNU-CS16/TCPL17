#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",result(n));
	return 0;
}

int result(int n)
{
	if(n == 1)
		return 2;
	if(n >= 2)
		return (result(n - 1) * 2) + 2;
}
