#include <stdio.h>
int count1_in_bin(int n)
{
	int count =0;
	while (n)
	{
		n = n & (n-1);
		count++;
	}
	return count;
}
int main()
{
	int n, count;
	printf("Input one figure:");
	while (scanf("%d",&n) == 1)
	{
		printf("\n");
		count = count1_in_bin(n);
		printf("%d", count);
		printf("\n");
		printf("Input another figure \n");
		printf("Or input qto quit:");
	}
	printf("Over!\n");
	return 0;
}
