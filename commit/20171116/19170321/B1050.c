    #include <stdio.h>
    #include <math.h>
    int main()
    {
        int N, m, n;
        int i, j, a, b, c, k = 0;
        scanf ("%d",&N);
        int arr[N];
        for (i = 0; i < N; i++)
            scanf ("%d",&arr[i]);
        for (i =ceil(sqrt(N)); i <= N; i++)
            if (N % i == 0)
            {
                m = i;
                n = N / i;
                break;
            }
        int new[m][n];
        for (a = 0, b = n - 1, c = m - 1; a < b; a++, b--, c--)
        {
            for (j = a; j <= b; j++)
                 new[a][j] = arr[k++];
            for (i = a + 1; i <= c - 1;i++)
                 new[i][b] = arr[k++];
            for (j = b; j >= a; j--)
                 new[c][j] = arr[k++];
            for (i = c - 1; i >= a + 1;i--)
                 new[i][a] = arr[k++];
        }
         if (n % 2 == 1)
            for (i = (n -1) / 2; i < m - ((n - 1) / 2); i++)
                new[i][(n - 1) / 2] = arr[k++];
        for (i = 0;i <= m - 1; i++)
           {
             for (j = 0; j <=n - 1;j++)
                 printf ("%d " ,new[i][j]);
            printf("%d\n",new[i][n - 1]);
           }
        return 0;
    } 
