#include <stdio.h>
struct namect{
    int n;
    int m;
};
int main ()
{
    int N;
    scanf ("%d", &N);
    struct namect num[N / 2] ;
    int i, j, temp = 100;
    for (i = 2; i < N / 2; i++)
    {
        num[i].n = 0;
        num[i].m = 0;
        if (N % i == 0)
        {
            num[i].n = i;
            num[i].m = N / i;
        }
    }
    int n, m;
    for (i = 2; i < N / 2; i++)
        if (num[i].n-num[i].m > 0)
            if (temp > num[i].n-num[i].m)
            {
                temp = num[i].n-num[i].m;
                n = num[i].m;
                m = num[i].n;
            }
    int arr[N];
    for (i = 0; i < N; i++)
        scanf ("%d", &arr[i]);
    for (i = 0; i < N; i++)
        for (j = i; j < N; j++)
            if (arr[i] <= arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    int aim[m][n];
    int p = 0, x = 0;
    while (x < N)
    {
        for (j = p; j < n-p-1; j++)
        {
            if (x == N)
                break;
            aim[p][j] = arr[x++];
        }
        for (i = p; i < m-p-1; i++)
        {
            if (x == N)
                break;
            aim[i][j] = arr[x++];
        }
        for (j = n-p-1; j > p; j--)
        {
            if (x == N)
                break;
            aim[m-p-1][j] = arr[x++];
        }
        for (i = m-p-1; i > p; i--)
        {
            if (x == N)
                break;
            aim[i][p] = arr[x++];
        }
        p++;
    }
    p = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            p++;
            printf ("%-6d", aim[i][j]);
            if (p % n == 0 && p >= n)
                printf ("\n");
        }
    return 0;
}
            
