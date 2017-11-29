#include <stdio.h>
int main ()
{
    int i, j, p = 0, N;
    int n, row = 0, col = 0, sum = 1;
    int arr[20][20] = {0}
    scanf ("%d", &N);
    for (i = 0;i <= N / 2; i++)
    {
        for (col = i; col < N-i-1; col++)
            arr[i][col] = sum++;

        for (row = i; row < N-i-1; row++)
            arr[row][N-i-1] = sum++;

        for (col = N-i-1; col > i; col--)
            arr[N-i-1][col] = sum++;
        
        for (row = N-i-1; row > i; row--)
            arr[row][i] = sum++;
    }
    if (N % 2 != 0)
    {
        arr[(N-1) / 2][(N-1) / 2] = N * N; 
    }
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        {
            printf ("%-5d", arr[i][j]);
            p++;
            if (p % N == 0 && p >= N)
                printf ("\n");
        }
    return 0;
}


