    #include <stdio.h>
    int main()
    {
        int a, b, i, j, k = 1;
        int N;
        printf ("input N:");
        scanf ("%d", &N);
        int arr[N][N];
        if (N % 2 == 1)
            arr[(N - 1) / 2][(N - 1) / 2] = N * N;
        for (a = 0, b = N - 1;a < b; a++, b--)
        {
            for (j = a; j <= b; j++)
                arr[a][j] = k++;
            for ( i = a + 1;i <= b - 1; i++)
                arr[i][b] = k++;
            for (j = b; j >= a; j--)
                arr[b][j] = k++;
            for (i = b - 1; i >= a + 1; i--)
                arr[i][a] =k++;
        }
        for (i = 0; i <= N - 1; i++)
        {
            for (j = 0; j <= N - 1; j++)
                printf ("%5d",arr[i][j]);
            printf ("\n");
        }
        return 0;
    } 
