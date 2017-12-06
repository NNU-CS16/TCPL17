 #include <stdio.h>



 void mysort(int *str, int a, int b)

{

	int i, j, temp;

	for (i = 0; i < b-1; i++)

		for (j = 0; j < b-i; j++)

		{

			if (str[j] > str[j+1])

			{

				temp = str[j];

				str[j] = str[j+1];

				str[j+1] = temp;

			}

		}

}



 int main()

{

	int a[101], b[101];

	int i, j;

	int N;

	scanf("%d", &N);

	for (i = 0; i < N; i++)

	{

		scanf("%d", &a[i]);

	}

	for (i = 0; i < N; i++)

	{

		scanf("%d", &b[i]);

	}

	

	for (i = 0; b[i] <= b[i+1] && i < N-1; i++);

	for (j = ++i; a[j] == b[j] && j < N; j++);

	if (j == N)

	{

		printf("insertion sort\n");

		mysort(a, 0, i);

	}

	else 

	{

		printf("merge sort\n");

		int k = 1, flag = 0;

		for (i = 0; i < N-1; i++)

		{

			if (b[i] > b[i+1])

			{

				flag = 1;

				k = i+1;

				break;

			}

		}

	

		while (flag)

		{

			if (k*4 < N)

			{

				mysort(a, 0, k*2-1);

				mysort(a, k*2, k*4-1);

			}

			else

				mysort(a, 0, k*2-1);

			flag = 0;

		}

	}

		for (i = 0; i < N; i++)

		{

			printf("%d ", a[i]);

		}

	

		printf("\n");

		return 0;

} 
