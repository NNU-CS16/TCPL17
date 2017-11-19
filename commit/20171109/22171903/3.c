#include <stdio.h>
int f(int n, long long int a, long long int b);
int main()
{
    int n;
 
    scanf("%d", &n);
    printf("%d\n", f(n, 1, 2));

    return 0;
}

int f(int n, long long int a, long long int b)
{
    if (n == 1)
        return a;
    else if (n == 2)
    {
	b = b % 100007;
    	return b;
    }
    else
    	return f(n - 1, b, a + b);
}
