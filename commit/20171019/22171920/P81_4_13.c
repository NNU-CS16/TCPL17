#include<stdio.h>
#include<math.h>
int main()
{
   int n,i,g;
   printf("请输入n(n>3):");
   scanf("%d",&n);
   g=sqrt(n);
   for(i=2;i<=g;i++)
   if(n%i==0)
       break;
   if(i<g)
       printf("%d不是素数\n",n);
   else
       printf("%d是素数\n",n);
  
   return 0;
}

