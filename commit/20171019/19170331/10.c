#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c,x;
   scanf("%d %d %d",&a,&b,&c);
   x=pow(a,b);
   printf("%d\n",x%c);
    
   return 0;
}
