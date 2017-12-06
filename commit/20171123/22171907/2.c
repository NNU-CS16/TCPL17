#include <stdio.h>

 int bin_insert(int n, int m, int j, int i)
{
    int temp;
    temp = m<<j;
    n |= temp;
    return n;
}

 int main()
{
    int a, b, j, i, res;
    scanf("%d%d%d%d", &a, &b, &j, &i);
    res = bin_insert(a, b, j, i);
    printf("%d\n", res);
    return 0;
}
