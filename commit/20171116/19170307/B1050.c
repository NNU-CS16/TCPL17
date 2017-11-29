#include <stdio.h>
#include <math.h>

int main()
{
   int N;
   int a[1000];
   int b[500][500];
   int i, j;
   int temp;
   int x, y, m, n, l = N;
   int num = 0;
   scanf("%d", &N);
   for(i = 0; i < N; i++)
       scanf("%d", &a[i]);
   for(i = 0; i < N - 1; i++)
       for(j = i + 1; j < N; j++)
       {
           if(a[j] > a[i])
           {
	      temp = a[j];
	      a[j] = a[i];
	      a[i] = temp;
	   }
       }
   for(x = N; x > 0; x--)
   {	
       y = N / x;
       if(N % x == 0 && x >= y && (x - y) < l)
       {
	  m = x;
	  n = y;
       }
	  l = x - y;
   }
   for(i = 1; i <= n / 2; i++)
   {
       for(j = i; j <= n - i; j++)
           b[i][j] = a[num++];
       for(j = i; j <= m - i; j++)
           b[j][n - i + 1] = a[num++];
       for(j = n - i + 1; j > i; j--)
           b[m - i + 1][j] = a[num++];
       for(j = m - i + 1; j > i; j--)
           b[j][i] = a[num++];
   }
   if(n % 2 == 1)
   {
      for(i = ((n / 2) + 1); i <= m - (n / 2); i++)
          b[i][(n / 2) + 1] = a[num++];
   }
   for(i = 1; i <= m; i++)
   {
       for(j = 1; j < n; j++)
	   printf("%d ", b[i][j]);
	   printf("%d\n", b[i][n]);
   }
   return 0;
}
