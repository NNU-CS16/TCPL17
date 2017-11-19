#include <stdio.h>
int count_stair (int n);

int main()
{
    int m , n;
    scanf ("%d" , &n);
    m = count_stair (n);
    printf ("%d\n", m);
    return 0;
}

int count_stair (int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return count_stair(n - 1) + count_stair(n - 2);
}

