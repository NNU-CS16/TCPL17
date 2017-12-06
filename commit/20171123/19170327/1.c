#include <stdio.h>
int f(int x)
{
	int n;
	for(n = x; n >= 1;n--)
	{
	if(x%n == 0 && n%2 != 0)
	return n;
	}
return 1;
}


int main()
{
	int n, x;
	int sum = 0;
	scanf("%d",&x);
	for(n = 1; n <= x; n++)
		sum += f(n);
	printf("%d\n",sum);
	return 0;
}




