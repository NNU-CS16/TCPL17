#include <stdio.h>
int FibonacciNum (int n)
{
    if (n < 0)
        return -1;
        if (n == 0)
            return 0;
            else 
                if(n == 1)
                {
                    return 1;
                }
                else
                    return (FibonacciNum (n - 1) + FibonacciNum (n - 2));
}
int main ()
{
    int n;
    scanf ("%d", &n);
    printf("%d\n", FibonacciNum (n) );
    return 0;
}
