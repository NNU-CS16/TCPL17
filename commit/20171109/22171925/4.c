#include <stdio.h>
int Fib(int n, int k)
{
    if(k == 1)
    return n;
    else
    {
        if(n <= 2)
        return n;
        if(n <= k)
        return 2*Fib(n-1, k-1);
        if(n > k)
        {
            int i, num = 0;
            for(i = 1; i <= k; i++)
            num += Fib(n-i, k);
            return num;
        }
    }
}

int main()
{
    int N, K;
    scanf("%d %d",&N,&K);
    printf("%d\n",Fib(N, K));
    return 0;
}


