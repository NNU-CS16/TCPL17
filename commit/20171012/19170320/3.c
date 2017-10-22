#include <stdio.h>
#include <math.h>
int main()
{
   float a,sum=0;
   int n,i;
   scanf("%d %f",&n,&a);
   printf("n=%d,a=%f\n",n,a);
   for(i=1;i<=n;++i)
   sum+=pow(a,i);
   printf("sum=%f\n",sum);
   return 0;
}
