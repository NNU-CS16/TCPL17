#include <stdio.h>
int main()
{
 int sum,x,n,a,i;
 printf("n=");
 scanf("%d",&n);
 printf("a=");
 scanf("%d",&a);
 sum=0,i=0,x=0;
 while(i<n)
 {
   x=x*10+a;
   sum=sum+x;
   i++;
 }
   printf("sum=%d\n",sum);
 return 0;
}
