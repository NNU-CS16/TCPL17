#include <stdio.h>
int main()
{
   int i=2,sum=0;
   while(i<=98)
   {
     sum=sum+i*(i+1)*(i-1);
     i=i+3;
   }
   printf("1*2*3+4*5*6+7*8*9+....+97*98*99=%d/n",sum);
   return 0;

}	
