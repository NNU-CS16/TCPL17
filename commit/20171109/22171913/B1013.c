#include <stdio.h>
#include <math.h>
int Is_prime(int n);
int main()
{
    int M, N, n = 1, j, k, res, q = 0;
    scanf("%d %d", &M, &N);
    for(k = 1, n = 1; k <= N; n++)
    {
	res = Is_prime(n);
	if (res == 1)
	    k++;
	if (res == 1 && k >= M)
	    printf("%d\n", n);
    }
    for(j = M, q = 0; j <= N; j++, q++)
    {
	if (q % 10 == 0)
	    printf("\n");
	else
	    printf(" ");
    }
    return 0;
}
int Is_prime(int n)
{
    int i;
    if (n == 1 || n == 2)
	return 1;
    if (n >= 3)
    {
	for(i = 2; i <= sqrt(n); i++)
	{
	    if (n % i == 0)
		break;
	}
    }
    if (i > sqrt(n))
	return 1;
    else 
	return 0;
}


