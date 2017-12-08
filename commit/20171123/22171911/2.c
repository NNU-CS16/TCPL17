#include <stdio.h>
int bin_insert(int n, int m, int j, int i)
{
    m << j;
    return n | m;
}
int main( )
{
    int n, m, j, i;
    scanf ("%d %d %d %d", &n, &m, &i, &j);
    printf ("%d\n", bin_insert(n, m, j, i));
    return 0;
}
    
