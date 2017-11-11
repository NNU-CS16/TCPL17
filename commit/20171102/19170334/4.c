#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	count1_in_bin(n);
	return 0;
}

int count1_in_bin(int n)
{
	int a = 0;
	int i;
	for(i = 0; i < 8; i++)
	{
	if(n % 2 == 1)
	a++;
	n >>= 1;
	}
	printf("%d\n",a);
}
