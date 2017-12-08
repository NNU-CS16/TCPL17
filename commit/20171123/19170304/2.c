#include <stdio.h>

int bin_insert(int n,int m,int j,int i)
{
    return ~(~(~0<<(i-j+1))<<j)&n|m<<j;
}

int main()
{
    int n,m,i,j;
    scanf("%d%d%d%d",&n,&m,&i,&j);
    printf("%d\n",bin_insert(n,m,i,j));
    return 0;
}
