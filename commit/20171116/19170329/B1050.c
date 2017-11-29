  #include <stdio.h>
  #include <math.h>

  int main()
  {
        int c=0, i, j, out = 0, m, n, N, t;
        int a[1000], b[100][100];

        scanf("%d", &N);

        for(i = 0; i < N; i++)
                scanf("%d", &a[i]);

        for(i = 0; i < N -1; i++)
                for(j = 0; j < N - 1 - i; j++)
                        if( a[j] < a[j + 1] )
                        {
                                t = a[j];
                                a[j] = a[j + 1];
                                a[j + 1] = t;
                        }

        m = sqrt( N );
        while( N % m != 0 )  m++;
	n = N / m;
        

        while( out < N )
        {
                i = 0; j = 0;
                for( i += c, j += c; j < n - c; j++ )
                {
                        if( out > N ) break;
                        b[i][j] = a[out];
                        out++;
                }
		
                for( j--, i += 1; i < m - c; i++ )
                {
                        if ( out > N ) break;
                        b[i][j] = a[out];
                        out++;
                }
                for( i--, j -=1; j >= c; j-- )
                {
                        if ( out > N ) break;
                        b[i][j] = a[out];
                        out++;
                }
                for( j++, i -=1; i > c; i--)
		{
                        if ( out > N ) break;
                        b[i][j] = a[out];
                        out++;
                }
		c++;
        }

        for( i = 0; i < m; i++ )
        {
                for( j = 0; j < n-1; j++ )
                {
                        printf("%d ", b[i][j]);
                }
                        printf("%d\n",b[i][n - 1]);

        }

        return 0;
  }

