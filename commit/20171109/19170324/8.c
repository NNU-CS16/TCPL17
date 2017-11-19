#include <stdio.h>

int main()
{
	int M, N, j;
	int n, i, flag, k;
	int prime[10000] = {2};
	scanf("%d%d", &M, &N);

	for (n = 3, k = 1; k <= N - 1; n++)
	{
		flag = 0;
		for (i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0) prime[k++] = n;
	}

    for (;M < N;)
    {
         for (j = 1; j <= 10; j++, M++)
         {
              printf("%d", prime[M - 1]);
              if (M < N)
                  printf(" ");
			  if (M >= N)
				  break;
         }
         printf("\n");
    }

	return 0;
}
