#include <stdio.h>
#include <math.h>

int main(void)
{
   int m, n, i, j, k = 0, temp = 0, arr[10000] = {0}, count = 0;

   printf("Please input M and N :\n");
   scanf("%d%d", &m, &n);
   for (i = 2; i < 10000; i++, temp = 0)
   {
     for (j = 2; j <= sqrt(i); j++)
     {
       if (i % j == 0)
       {
           temp = 1;
           break;
       }
     }
   if (temp == 0)
     {
        arr[k] = i;
        k++;
     }
   }
   for (i = m - 1; i <= n - 1; i++)
   {
      printf("%d ", arr[i]);
      count++;
      if (count == 9)
      {
        i = i + 1;
        printf("%d\n", arr[i]);
        count = 0;
      }
   }
   printf("\n");

   return 0;
}
