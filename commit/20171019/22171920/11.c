#include<stdio.h>
int main()
{
 int i,j,n,a[200][200]={0};
 printf("input the number of row:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  a[i][i]=1;
  a[i][0]=1;
 }
 for(i=2;i<n;i++)
 {
  for(j=1;j<n-1;j++)
  {
   a[i][j]=a[i-1][j-1]+a[i-1][j];
  }
 }
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
         if(j<i&&a[i][j]!=0)
   {
    printf("%d ",a[i][j]);  
   }
   if(j==i&&a[i][j]!=0)
   {
    printf("%d\n",a[i][j]);
   }
     }
    }
}
