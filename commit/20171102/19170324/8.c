#include <stdio.h>

int LCM(int m, int n);

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", LCM(m, n));

    return 0;
}

int LCM(int m, int n)
{
    int i, flag = 1, sum;
    for(sum = 1; flag == 1;)
    {
	flag = 0;
        for (i = 2; i <= m || i <= n; i++)
        {
	     if (m % i == 0 && n % i == 0)
	     {
		 flag = 1;
	         break;
	     }
        }
        if (flag == 1)
        {
            m = m / i;
            n = n / i;
	    sum = sum * i;
        }
    }

    return sum * m * n;
}
