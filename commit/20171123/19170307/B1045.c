#include <stdio.h>
int main()
{
   int N, i, j, k, p = 0, s, t = 0;
   scanf("%d", &N);
   int a[N], b[100];
   for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
   for (i = 1; i < N; i++)
   {
        if (a[i] < a[0])
            break;
   }
   if (i = N)
   {
       a[0] = b[0];
       p = 1;
       t = 1;
   }
   for (p = 1; ; j++)
   {
        for ( ; j < N-1; j++)
        {
             for (k = j + 1; k < N; k++)
             {
                  if (a[j] > a[k]) break;
             }
             for (s = j - 1; s >= 0; s--)
             {
                  if (a[j] < a[s]) break;
             }
             if (k == N && s == -1)
                 break;
        }
        a[j] = b[p];
        p = p + 1;
        if (j = N - 1) break;
   }
   if (t = 0)
   {
       for (i = 1; i < p + 1; i++)
            printf("%d ", b[i]);
   }
   if (t = 1)
   {
       for (i = 0; i < p + 1; i++)
            printf("%d ", b[i]);
   }
   return 0;
}

