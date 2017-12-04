#include <stdio.h>
int jys(int n);
int main()
{
	int N;
	int sum = 0;
	int i;
	int j;
	printf("Please input N:");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{	
		j = jys(i);
		sum = sum + j;
	}
	printf("%d\n",sum);
	return 0;
}

int jys(int n)
{	
	int k;
	int m = n%2;
	if (m == 1)
	    return n;
	else if (m == 0)
	{
    	while ((n%2) == 0)
		{
			n = n/2;
			k = n;
		}
		return k;
	}
}	 
