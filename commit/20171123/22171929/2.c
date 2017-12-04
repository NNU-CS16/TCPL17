#include <stdio.h>
int bin_insert(int n, int m, int j, int i);
int main()
{
   int n, m, i, j, s;
   scanf("%d%d", &n, &m);
   scanf("%d%d", &j, &i);
   s = bin_insert(n, m, j, i);
   printf("%d\n", s);
   return 0;
}
int bin_insert(int n, int m, int j, int i)
{
   int t1[32], t2[i-j+1];
   int a, b,s;
   for(a = 0; a < 32; a++)
      t1[a] = 0;
   for(a = 0; a < i-j+1; a++)
      t2[a] = 0;
   for(a = 0; n > 0; a++)
   {
       t1[a] = n % 2;
       n = n/2;
   }
   for(a = 0; m > 0; a++)
   {
       t2[a] = m % 2;
       m = m/2;
   }
   for(a = 0; j <= i; j++)
   {
      t1[j] = t2[a];
      a++;
   }
   b = 1;
   s = 0;
   for(a = 0;a < 32; a++)
   {
      s = s + t1[a] * b;
      b = b * 2;
   }
    return s;
}
