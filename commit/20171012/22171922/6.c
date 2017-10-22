#include<stdio.h>
int main()
{
   int i,m,n,N;
   printf("Please input the number of N:");
   scanf("%d",&N);
   if(N>=13|N<=0)
   {
   printf("Please input a right N\n");
   return 1;
   }
   else
      for(i=1;i<=N;i++)
      {
         for(m=1;m<=15-i;m++)
            printf(" ");
         for(n=1;n<=2*i-1;n++)
            printf("*");
         printf("\n");
      }
      for(i=N+1;i<=2*N-1;i++)
      {
         for(m=1;m<=15+i-2*N;m++)
            printf(" ");
         for(n=1;n<=4*N-2*i-1;n++)
            printf("*");
         printf("\n");
      }
   return 0;
}
