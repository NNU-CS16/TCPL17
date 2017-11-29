#include <stdio.h>
#include <string.h>
#define C 1005

int main(void)
{
   int c[C] = {0}, la, lb, n = 0, i, j, r = 0, t;
   char a[1000], b[1000];

   printf("Please input two number :\n");
   scanf("%s %s", a, b);
   la = strlen(a);
   lb = strlen(b);
   for (i = la - 1, j = lb - 1; i >= 0 && j >=0; i--, j--)
   {
      t = (a[i] - '0') + (b[j] - '0') + r;
      c[n] = t % 10;
      n++;
      r = t / 10;
   }
   if (la > lb)
     for (; i >= 0; i--)
     {
        t = a[i] - '0' + r;
        c[n++] = t % 10;
        r = t / 10;
     }
   else if (lb > la)
      for (; j >= 0; j--)
      {
         t = b[j] - '0' + r;
         c[n++] = t % 10;
         r = t / 10;
      }
   else
      c[n++] = r;
   for(i = C - 1; i >= 0; i--)
   if (c[i])
      break;
   for(j = i; j >= 0; j--)
     printf("%d", c[j]);
   printf("\n");

   return 0;
}
