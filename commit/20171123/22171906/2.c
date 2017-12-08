#include <stdio.h>

int bin_insert(int n, int m, int j, int i)
{
    return ~(~(~0 << (i-j+1)) << j ) &n | m << j;
}

int main ()
{
    int n, m, j, i;
    scanf("%d%d%d%d",&n,&m,&j,&i);
    printf("%d",bin_insert(n,m,j,i));
    printf("\n");
    return 0;
}
