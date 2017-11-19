#include <stdio.h>

int Bubble_(int *p)
{
	int i, j, temp, m;
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (p[i] > p[j])
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	m = p[0] * 1000 + p[1] * 100 + p[2] * 10 + p[3];
	printf("%d\n", m);
}

int main()
{
	int i, j, temp, n, m;
	int a1, a2, a3, a4;
	scanf("%d", &n);
	a1 = n/1000;
	a2 = (n - a1 * 1000) / 100;
	a3 = (n - a1 * 1000 - a2 * 100) / 10;
	a4 = n % 10;
	int *p[4] = {&a1, &a2, &a3, &a4};
	printf("%d\n", a1);
    printf("%d\n", a2);
    printf("%d\n", a3);
    printf("%d\n", a4);
	Bubble_(p[4]);
	return 0;
}
