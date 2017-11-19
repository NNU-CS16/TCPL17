#include <stdio.h>
int Fib(int n);
int main()
{
    int n, m;
    scanf("%d", &n);
    m = Fib(n) % 100007;
    printf("m = %d\n", m);
    return 0;
}
int Fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
	return Fib(n - 1) + Fib(n - 2);
} 
