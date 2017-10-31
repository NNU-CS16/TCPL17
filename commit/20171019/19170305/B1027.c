#include<stdio.h>
int main()
{
   int N,m,n,k,i,j;
   scanf("%d",&N);
   if(N>1000||N<=0)
      printf("Wrong!\n");
   else
   {
      for(m=1;(m*m+2*m-1)/2<=N;m+=2)
         n=m;

      for(k=1;k<=(n+1)/2;k++)
      {
         for(i=1;i<=k-1;i++)
            printf(" ");
         for(j=1;j<=n-2*(k-1);j++)
            printf("*");
         printf("\n");
      }
      
      for(k=(n+1)/2+1;k<=n;k++)
      {
         for(i=1;i<=n-k;i++)
            printf(" ");
         for(j=1;j<=2*k-n;j++)
            printf("*");
         printf("\n");
      }
   }
printf("%d\n",N-(n*n+2*n-1)/2);
return 0;
}
