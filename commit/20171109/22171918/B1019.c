#include <stdio.h>
int main ()
{
	int a[4];
	int i, j, temp, p, q, n;
	scanf("%d", &n);
	do
	{
		for (i = 0; i < 4; i++)
		{
			a[i] = n % 10;
			n /= 10;
		}
		for (i = 0; i < 4; i++)
		 for (j = 0; j < 3 - i; j++)
			{
				if (a[j] > a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		p = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
		q = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
		printf("%04d - %04d = %04d\n", p, q, p - q);
		n = p - q;
	}while(n != 6174 && n != 0);
	return 0;
}
