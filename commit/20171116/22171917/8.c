#include <stdio.h>
int main()
{

   int n, i, j,a=0,b=n-1,num = 1;
   int z[1000][1000];
   scanf( "%d", &n );
   while ( a < b )
   {
   for ( i = a; i < b; i++ )
     z[a][i] = num++;
    for ( i = a; i < b; i++ )
      z[i][b] = num++;
     for ( i = a; i < b; i++ )
       z[b][b + a - i] = num++;
      for ( i = a; i < b; i++ )
        z[b + a - i][a] = num++;
        a++;
        b--;
    }
    if ( a == b ) z[a][b] = num;

    for     ( i = 0; i < n; i++ )
    {
     for ( j = 0; j < n - 1; j++ )
      printf( "%-4d", z[i][j] );
      printf( "%d\n", z[i][n - 1]);
     }

     return 0;
}
