#include <stdio.h>

int k, a[1000] = {0};

void step(int n)
{
   if (n > 1)
   {
      step(n - 1);
      for (int i = (n - k >= 0)?(n - k) : 0; i < n; i++)
         a[n] = (a[n] + a[i]) % 100007;
   }
}

int main(void)
{
   int n;

   printf("Please input N, K :\n");
   scanf("%d%d", &n, &k);
   a[0] = a[0] = 1;
   step(n);
   printf("%d\n", a[n]);

   return 0;
}

