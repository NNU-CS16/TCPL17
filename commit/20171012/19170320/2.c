#include <stdio.h>
int main()
{
   int a,b,c,sum=0;
   for(a=1,b=2,c=3;a<=97;a+=3,b+=3,c+=3)
   sum+=a*b*c;
   printf("sum=%d\n",sum);

   return 0;
}
