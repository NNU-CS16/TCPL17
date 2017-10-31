#include<stdio.h>
#include<math.h>
int main()
{
   int x,y,n,d,f;
   scanf("%d",&n);
   d=sqrt(n/2);
   f=1;
   for(x=0;x<=d;x++)
{
   y=sqrt(n-x*x);
   if(x*x+y*y==n)
   printf("%d %d\n",x,y);
}
   if(f)
   printf("No Solution");
   printf("\n");
   return 0;
}
