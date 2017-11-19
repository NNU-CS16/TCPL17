#include <math.h>
#include <stdio.h>
int main()
{

    int M, N;
    scanf("%d %d", &M, &N);
    int primes[10000];

    for(int n = 2, count = 0; count < N; n++)
    {
        int iprime = 1;
        for(int j = 0; count > 0 && primes[j] <= sqrt(n); j++)
            if(n % primes[j] == 0)
                iprime = 0;
        if(iprime) primes[count++] = n;
    }

    for(int i = M; i < N; i++)
    {
        printf("%d", primes[i - 1]);
        printf((i - M + 1) % 10 ? " " : "\n");
    }
    printf("%d", primes[N - 1]);

    return 0;
}
