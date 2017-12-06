#include <stdio.h>
int bin_insert(int m,int n,int i,int j)
{
    return ~(~(~0 << (i - j + 1)) << j) & n | m << j;
}
int main()
{
    int m,n,i,j;
    scanf("%d%d%d%d",&n,&m,&j,&i);
    printf("%d",bin_insert(m,n,i,j));
    return 0;
}
