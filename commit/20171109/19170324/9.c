#include <stdio.h>
int main()
{
	int m, a[4];
	scanf("%d", &m);
	a[0] = m % 10;
    a[1] = m % 100 / 10;
    a[2] = m % 1000 / 100;
    a[3] = m / 1000;

	int i, j, temp, max, min, N;
	for(;;)
	{
		for (i = 0; i < 3; i++)
		    for (j = 0; j < 3 - i; j++)
			     if (a[j] > a[j + 1])
			     {
				     temp = a[j];
				     a[j] = a[j + 1];
				     a[j + 1] = temp;
			     }

	    max = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
	    min = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
		N = max - min;

		if (N == 0)
		{
	        printf("%d%d%d%d - %d%d%d%d = 0000\n", a[3], a[2], a[1], a[0],
                                                   a[0], a[1], a[2], a[3]);
			break;
		}

		printf("%d%d%d%d - %d%d%d%d = %d\n", a[3], a[2], a[1], a[0],
									         a[0], a[1], a[2], a[3], N);

		if (N == 6174) break;
	
		a[0] = N % 10;
		a[1] = N % 100 / 10;
		a[2] = N % 1000 / 100;
		a[3] = N / 1000;
	}

	return 0;
}
