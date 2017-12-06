#include <stdio.h>

int main()
{
    int a[100], b[100], k = 0, i, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    if (a[1] < a[2])
    {
        b[k] = a[1];
        k++;
    }
    for (i = 2; i < n; i++)
    {
        if (a[i] < a[i + 1] && a[i] > a[i - 1])
        {
            b[k] = a[i];
            k++;
        }
    }
    if (a[n] > a[n - 1])
    {
        b[k] = a[n];
        k++;
    }
    printf("%d\n", k);
    for (i = 0; i < k; i++)
        printf("%d ", b[i]);
}

