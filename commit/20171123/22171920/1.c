#include <stdio.h>
int f(int x)
{
	int i;
	if (x == 1)
	return 1;
	else
	if (x%2 == 0)
	{
		i = (x*x)/4;
		return f(x/2) + i;
	}
	else
	{
		return f(x-1) + x;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
    int k = f(t);
    printf("%d\n",k);

	return 0;
}
