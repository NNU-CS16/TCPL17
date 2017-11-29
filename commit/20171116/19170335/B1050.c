    #include <stdio.h>
    #include <math.h>
    int main()
    {
        int N, m, n, i, j, l, k = 0, temp = 0;
        scanf("%d", &N);
        int a[N];
        for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
        for (i = 1; i <= sqrt(N); i++)
        {
            if (N  % i == 0)
                n = i;
        }
        m = N / n;
        // paixu
        for (i = 0; i < N - 1; i++)
        {
            for (j = 0; j < N - i -1; j++)
            {
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j+1] = temp;
                }
            }
       }

      
        int b[m][n];
        for (i = 0; i <= n / 2; i++)
        {
            for (j= i; j < n - i; j++)
            {
                b[i][j] = a[k];
                k= k + 1;
            }
            for (l = i + 1;l < m - i; j++)
            {
                b[l][j - 1] = a[k];
                k = k + 1;
            }
            for (j = n - i - 2; j >= i; j--)
            {
                b[l - 1][j] = a[k];
                k = k + 1;
            }
            for (l = m - i - 2; j >= i + 1; j--)
            {
                b[l][j + 1] = a[k];
                k = k + 1;
            }
        }
        
        
        for( i = 0; i < m; i++)
        {
            for (j = 0; j < n - 1; j++)
                printf("%d ", b[i][j]);
            printf("%d\n", b[i][j]);
        }
        return 0;
    }

                               
