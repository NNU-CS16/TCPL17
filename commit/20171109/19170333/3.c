#include <stdio.h>
int step (int n)
{
    if (n <= 0)
        return 0;
    else
        if (1 == n || 0 == n)
            return 1;
        else
            if (2 == n)
                return 2;

    return step (n-1) + step (n - 2);
}
int main ()
{
    int n;
    scanf ("%d", &n);
    printf("%d\n",( step (n)) % 10007);
    return 0;
}
