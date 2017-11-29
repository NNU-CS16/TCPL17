#include <stdio.h>
#include <string.h>
int main()
{
   char a1[1000], b1[1000];
   int c[1001], a[1000], b[1000];
   int i, j, lenA, lenB, len;
   printf("请输入A:\n");
       scanf("%s", a1);
   printf("请输入B:\n");
       scanf("%s", b1);
   for(i = 0; i < 1000; i++)
       a[i] = 0;
   for(i = 0; i < 1000; i++)
       b[i] = 0;
   lenA = strlen(a1);
   for(i = 0; i < lenA; i++)
      a[i] = a1[i] - '0';
   lenB = strlen(b1);
   for(i = 0; i < lenB; i++)
      b[i] = b1[i] - '0';
   if(lenA > lenB)
      len = lenA;
   else
      len = lenB;
   j = 0;
   for(i = 0; i < len; i++)
   {
      c[i] = a[i] + b[i] + j;
      if(c[i] >= 10)
      {
         j = c[i] - 10;
         c[i] = c[i] - j;
      }
      else
         j = 0;
   }
   printf("两数之和为:\n");
   if(c[len] == 0)
   for(i = len -1; i >= 0; i--)
        printf("%d", c[i]);
   else
   for(i = len; i >= 0; i--)
       printf("%d", c[i]);
   printf("\n");
   return 0;
} 
