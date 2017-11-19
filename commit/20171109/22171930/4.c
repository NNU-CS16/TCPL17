#include <stdio.h>

int main()
{
    int a[1000007] = {1};
    int k,n,j,i;
    scanf("%d%d", &k, &n);
    for (i = 1; i <= n; i++)
    for (j = 1; j <= k; j++)
    if (i >= j)
    a[i] = (a[i] + a[i-j]) % 100007;
    printf("%d\n", a[n]);
    return 0;
}

    

