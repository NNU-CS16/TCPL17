#include <stdio.h>
int f(long long int N);

int main()
{
    long long int N,sum=0;
    int i;
    scanf("%lld",&N);
    for ( i=1; i<=N; i++)
        sum+=f(i);
    printf("%lld\n",sum);
    return 0;
}

int f(long long int N)
{
    if ( N%2!=0 )
        return N;
    else
        return f(N/2);
}
