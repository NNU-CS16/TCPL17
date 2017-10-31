#include <stdio.h>
#include <math.h>
int main()
{
   int n, i, j, flag = 0;
   scanf("%d", &n);
   for(i = 0; i <sqrt(n); i++)
   {
      for(j = 0; j <sqrt(n); j++)
      {
         if(i * i + j * j == n && i < j)
         {
            flag = 1;
            printf("%d %d\n", i, j);
         }
      }
   }
   if(!flag)
   printf("No Solution");

   return 0;
}
