#include <stdio.h>
int main(void)
{
   int n, i, j, k, arr1[10], arr2[10], count = 0;

   printf("Please input N :\n");
   scanf("%d", &n);
   printf("Please input arr :\n");
   for (i = 0; i < n; i++)
   scanf("%d", &arr1[i]);

   for (i = 0; i < n; i++)
   {
      int temp = 0;

      for (j = 0; j < i; j++)
      if (arr1[j] > arr1[i])
          {
               temp = 1;
               break;
          }
      if (temp == 0)
      for (k = i + 1; k < n; k++)
         if (arr1[k] < arr1[i])
         {
             temp = 1;
             break;
         }
      if (temp == 0)
      arr2[count++] = i + 1;
     }
     printf("%d\n", count);
     for (i = 0; i < count; i++)

     printf(i == 0 ? "%d" : " %d", arr2[i]);
     putchar('\n');

     return 0;
}
