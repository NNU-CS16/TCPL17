#include<stdio.h>
  
  int n;
  int m;
  int num[105];
  int i;
  int count = 0;
  int main()
  {
     scanf("%d%d", &n, &m);
     m = n - m % n;
     for( i = 0; i < n; ++i )
     {
         scanf( "%d", &num[i] );    
     }
     for( i = m; i < n; ++i )
     {
         printf("%d", num[i]);
         ++count;
         if( count != n )
         {
             printf(" ");
         }        
     }
     for( i = 0; i < m; ++i )
     {
         printf("%d", num[i]);
         ++count;
         if( count != n )
         {
             printf(" ");
         }
     }
     printf("\n");    
 }
