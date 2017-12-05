#include <stdio.h>
#define MAX 100000
int c[100000];
int man[100000] = {0};
int d[100000] = {0};
int main()
{    int n, i = 0;
     int a, b;
     scanf("%d", &n);
      for (i = 0; i < MAX; i++)
       c[i] = -1;
        for (i = 0; i < n; i++)
         {
              scanf("%d %d", &a, &b);
              c[a] = b;
              c[b] = a;
         }
        int m;
        scanf("%d", &m);
        for (i = 0; i < m; i++)
            {
             scanf("%d", &a);
            man[a] = 1;
            }
            int count = 0, j = 0;
            for (i = 0; i < MAX; i++)
            if (man[i] == 1 && man[c[i]] != 1)
            {
                count++;
                d[j] = i;
                j++;
            }
                printf("%d\n", count);
                if (count == 0)
                return 0;
                for (i = 0; i < j; i++)
            {
                printf("%05d ", d[i]);
            }
                printf("\n");
                return 0;
            }



