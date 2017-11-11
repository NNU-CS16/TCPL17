#include <stdio.h>

int is_int_pal(int n);
int main()
{
   int n;
   scanf("%d",&n);
   int flag = is_int_pal(n);
   printf("%d\n", flag);
   return 0;
}
int is_int_pal(int n)
{
   int flag, a[1000];
   int count = 0;
   while (n != 0)
   {
          a[count] = n % 10;
          n = n / 10;
          count++;
   }
   if (count % 2 != 0)
   {
       int p=0;
       while (p != count - p - 1)
       {
              if (a[p] == a[count - p - 1])
                  p++;
              else break;
       }
       if ( p < count - p - 1)
            flag = -1;
       else flag = 0;
   }
   else flag = -1;
   return flag;
}

