#include <stdio.h>
int main()
{
   int M, N, i, j;
   scanf("%d", &N);
   int a[2*N];
   for (i = 0; i < 2*N; i = i + 2)
        scanf("%d %d",&a[i],&a[i+1]);
   scanf("%d",&M);
   int b[M];
   for (j = 0; j < M; j++)
        scanf("%d",&b[j]);
   int k;
   k = M;
   for (j = 0; j < M; j++)
   {
        for (i = 0; i < 2*N; i++)
        {
             if (a[i] == b[j])
                 k = k - 1;
             else k = k;
        }
   }
   printf("%d\n",k);

   for (j = 0; j < M; j++)
   {
        for (i = 0; i < 2*N; i++)      {
             if (a[i] == b[j])
                 break;
        }
        if (i > 2*N - 1)
        printf("%d ", b[j]);
   }
   return 0;
}

