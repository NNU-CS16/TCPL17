#include <stdio.h>
#include <stdlib.h>

int count1_in_bin(int n)
{
   int count = 0;
   while (n != 0)
   {
          if(n % 2 == 1) count++;
          n=n>>1;
   }
   return count;
}
int main()
{
   int n;
   scanf("%d",&n);
   int count = count1_in_bin(n);
   printf("%d\n", count);
   return 0;
}

