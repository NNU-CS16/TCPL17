#include <stdio.h>
#include <math.h>
int main ()
{ 
   int n,x,i;
   float a,sum=0;
   scanf("%f,%d",&a,&n);
   for(i=1;i<=n;i+=1)
   sum+=pow(a,i);
   printf("sum=%f\n",sum);
   return 0;
}
