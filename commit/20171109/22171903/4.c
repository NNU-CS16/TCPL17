#include <stdio.h>
int f(int n, int k, long long int a, long long int b);
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n", f(n, k, 1, k));
    return 0;
}

int f(int n, int k, long long int a, long long int b)
{
    if (n == 1)
	return a;
    if (n != 1 && n < k)
	return f(n - 1, n ,b % 100007, (b + n) % 100007);
    else
	return f(n - 1, k, b % 100007, (a + b) % 100007);
}
