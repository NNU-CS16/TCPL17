  #include <stdio.h>

  int main()
  {
        int i,j,k,t,flag = 0;
        int n, m;
        int a[50000][2] = {0}, b[10000] = {0}, c[10000] = {0};
        scanf("%d",&n);

        for( i = 0; i < n; i++ )
                for( j = 0; j < 2; j++ )
                        scanf("%d", &a[i][j]);
        scanf("%d", &m);
        for( i = 0; i < m; i++ )
                scanf("%d",&b[i]);

        int cp = 0;
        for( k = 0; k < m; k++ )
        {
                for( i = 0; i < n; i++ )
                        {
                                if( b[k] == a[i][0] )
                                {
                                        for( t = 0; t < m; t++ )
                                                if(  b[t] == a[i][1] )
                                                {
                                                        b[k] = flag;
                                                        b[t] = flag;
                                                        cp +=2;
                                                }
                                }
                        }
        }

        int k1 = 0;
        for ( i = 0; i < m; i++ )
        {

                if( b[i] != flag )
                {
                        c[k1] = b[i];
                        k1++;
                }
        }

        printf("%d\n", m - cp);
        for( i = 0; i < k1; i++ )
                printf("%d ", c[i]);

        return 0;
  }


