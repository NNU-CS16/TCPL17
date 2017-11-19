#include <stdio.h>
int szhd1(int m);
int szhd2(int p);

int main()
{
   int n, m, p, w, q, b[4], n1, n2, n3;
   scanf("%d", &n);
   m = n;
   p = n;
   n3 = 0;
   while (n3 != 6174)
   {
          n1 = szhd1(m);
          n2 = szhd2(p);
          n3 = n1 -n2;
          if (n1 == n2) break;
          else
          {
             printf("%d - %d = %d\n", n1, n2, n3);
             m = n3;
             p = n3;
          }
   }
   if (n3 !=6174) printf("N - N = 0000");
   return 0;
}

int szhd1(int m)
{
   int i, j, k, temp1, a[4], n1;
   for (i = 0; m != 0; i++)
   {
        a[i] = m % 10;
        m = m / 10;
   }
   for (j = 0; j < 3; j++)
        for (k = 0; k < 3 - j; k++)
             if (a[k] < a[k + 1])
             {
                 temp1 = a[k];
                 a[k] = a[k + 1];
                 a[k + 1] = temp1;
             }
   n1 = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
   return n1;
}

int szhd2(int p)
{
   int s, d, f, temp2, c[4], n2;
   for (s = 0; p != 0; s++)
   {
        c[s] = p % 10;
        p = p / 10;
   }
   for (d = 0; d < 3; d++)
        for (f = 0; f < 3 - d; f++)
             if (c[f] > c[f + 1])
             {
                 temp2 = c[f];
                 c[f] = c[f + 1];
                 c[f + 1] = temp2;
             }
   n2 = c[0]*1000 + c[1]*100 + c[2]*10 + c[3];
   return n2;
}

