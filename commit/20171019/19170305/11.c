#include<stdio.h>
int main()
{
   int i,j,n=5;
   int a[n][n];

   printf("1\n");
   printf("1\t1\n");
   for(i=0;i<=1;i++)
      for(j=0;j<i+1;j++)
      {
         if(i==0&&j==0)
         {
            a[i][j]=1;
            continue;
         }
         if(i==1&&j==0)
         {
            a[i][j]=1;
            continue;
         }
         if(i==1&&j==1)
         {
            a[i][j]=1;
            continue;
         }
      } 

   for(i=2;i<=n-1;i++)
      for(j=0;j<=i;j++)
      {
         if(j==0)
         {
            a[i][j]=1;
            printf("1\t");
            continue;
         }
         if(j>=1&&j<=i-1)
         { a[i][j]=a[i-1][j-1]+a[i-1][j];
           printf("%d\t",a[i][j]);
           continue;}
         if(j==i)
         {
            a[i][j]=1;
            printf("1\n");
            continue;
         }
      }
return 0;
}
