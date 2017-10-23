#include <stdio.h>
int main()
{
   int n,sum=0;
   for(n=1;n<=97;n+=3)
   sum+=n*(n+1)*(n+2);
   

   printf("1×2×3+4×5×6+...+97×98×99=%d",sum);
   
   return 0;
}
