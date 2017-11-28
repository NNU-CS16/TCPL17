#include <stdio.h>



int main()

{

	int i, j, k;

	int N, mem1[100000];

	scanf("%d", &N);

	for (i = 0; i < 2 * N; ++i)

	  scanf("%d", &mem1[i]);

	int M, mem2[10000];

	scanf("%d", &M);

	for (i = 0; i < M; ++i)

	  scanf("%d", &mem2[i]);

	int flag = -1, mem[10000], n = 0;

	for (i = 0; i < M; ++i)

	{

	  for (j = 0; j < 2 * N; ++j)

	  {

		if (mem2[i] == mem1[j])

		{

		  flag = 0;

		  if (j % 2 == 0)

			for (k = 0; k < M; ++k)

			{

			  if (mem2[k] != mem1[j+1])

				flag = -1;

			  else

			  {

				flag = 0;

				break;

			  }

			}

		  else

			for (k = 0; k < M; ++k)

			{

			  if (mem2[k] != mem1[j-1])

				flag = -1;

			  else

			  {

				flag = 0;

				break;

			  }

			}

		}

	  }	

	  if (flag == -1)

	  {

		mem[n] = mem2[i];

		++n;

	  }

	}

	printf("%d\n", n);

	int temp;

	for (i = 0; i < n - 1; ++i)

	  for (j = 0; j < n - 1 - i; ++j)

		if (mem[j] > mem[j+1])

		{

		  temp = mem[j];

		  mem[j] = mem[j+1];

		  mem[j+1] = temp;

		}

	for (i = 0; i < n - 1; ++i)

	  printf("%d ", mem[i]);

	printf("%d", mem[n-1]);

	

	return 0;

}


