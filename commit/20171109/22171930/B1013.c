#include <stdio.h>
#include <math.h>
int main()
{
    int m,n;
    scanf("%d%d", &m, &n);
    int primes[10000];
    int i,j,a,count;
    for (a = 2,count = 0; count < n; a++)
    {
        int iprime = 1;
        for (j = 0; count > 0 && primes[j] <= sqrt(a); j++)
        if (a % primes[j] == 0)
        iprime = 0;
        if (iprime)
        primes[count ++] = a;
    }
    for (i = m; i<n; i++)
    {
        printf("%d", primes[i-1]);
        printf((i - m + 1) % 10 ?"":"\n");
    }
    printf("%d", primes[n-1]);
    return 0;
}        
