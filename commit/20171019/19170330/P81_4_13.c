#include<stdio.h>
#include<math.h>
int main()
{
   int n,i,m;
   printf("Input n= ");
   m=sqrt(n);
   scanf("%d",&m);
   for (i=2;i<=m;i++)
      if (m%i==0)
         break;
      if (i<m)
         printf("不是素数\n");
      else 
         printf("是素数\n");
    
        return 0;
}
