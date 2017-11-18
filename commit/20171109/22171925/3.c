#include <stdio.h>
int Fib(int n);
int main()
    {
        int N,i;
        scanf("%d",&N);
        printf("%d\n",Fib(N));
        return 0;
    }

    int Fib(int n)
    {
        if(n == 1)
        return 1;
        if(n == 2)
        return 2;
        return Fib(n - 1) + Fib(n - 2);
    }
