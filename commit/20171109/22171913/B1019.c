#include <stdio.h>
void order(int x)
{
    int a[4], max, min;
    a[0] = x / 1000;
    a[1] = x / 100 % 10;
    a[2] = x / 10 % 10;
    a[3] = x % 10;
    sort(a, a + 4);
    min = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
    max = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
}
int main()
{
    int N, M, max, min;
    scanf("%d", &N);
    if ((N / 1000 == N / 100 % 10) && (N / 1000 == N / 10 % 10) 
	&& (N / 1000 == N % 10))
	printf("%04d - %04d = 0000\n", N, N);
    else
    {
        order(N);
        M = max - min;
	printf("%04d - %04d = %04d\n", max, min, M);
        N = M;
    }
    while(M != 6174)
    return 0;
}


