#include<stdio.h>
int Fib(int n, int a, int b);
int main()
{
    int n;
    scanf("%d" ,&n);
    printf("Fib(n)=%d\n",Fib(n,1,1));
    return 0;
}

int Fib(int n, int a, int b)
{
    if (n<=2)
        return b;
    return Fib(n-1, b, a+b);
}

