#include <stdio.h>
#include <string.h>

int main()
{
   char m[500], n[500];
   int i, len_m, len_n, len_max, k;
   int a[500]={0}, b[500]={0}, c[500]={0};
   scanf("%s", m);
   len_m = strlen(m);
   for (i = 0; i <= len_m - 1; i++)
        a[i] = m[len_m -1 -i] - '0';
   scanf("%s", n);
   len_n = strlen(n);
   for (i = 0; i <= len_n - 1; i++)
        b[i] = n[len_n -1 - i] - '0';
      len_max = len_m > len_n ? len_m : len_n;
   k=0;
   for (i = 0; i <= len_max - 1; i++)
   {
        c[i] = (a[i] + b[i] + k) % 10;
        k = (a[i] + b[i] + k) / 10;
   }
   if (k != 0)
       c[len_max] = 1;
   if (c[len_max] == 1)
       printf("1");
   for (i = len_max - 1; i >= 0; i--)
       printf("%d\n", c[i]);
   return 0;
}

