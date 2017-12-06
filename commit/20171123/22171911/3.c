#include <stdio.h>
int sum(int n)
{   
    n && (n += sum(n - 1));
    return n;
}
int main( )
{
    int n;
    scanf ("%d", &n);
    printf ("%d", sum(n));
    return 0;
}
