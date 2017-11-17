 #include <stdio.h>

 int main()
{
	int M, N;	//M <= N <= 10^4;
	scanf("%d %d", &M, &N);

	int i, j, k=0, n, count = 0, str[10000];
	for (i = 2; i < 10000; i++)
	{
		for (j = 2; j <= i-1; j++)
		{
			if (i%j == 0)
			break;
		}
		
		if (j < i)
			continue;
		else
		{	
			str[k] = i;
			k++;
		}
	}

	for (n = M-1; n < N-1; n++)
	{
		printf("%d ", str[n]);
		count++;
		if (count == 10)
		{	
			printf("\n");
			count = 0;
		}
	}
	printf("%d\n", str[n]);
	return 0;
}
