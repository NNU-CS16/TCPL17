#include<stdio.h>
int main()
{
  int  a[10][10],i,j;

  for(i=0;i<10;i++)
 {
  for(j=10;j>=i;j--)
  printf("%2c",' ');

   for(j=0;j<=i;j++)
  {
   if(i==j||j==0)
   a[i][j]=1;
    else
   a[i][j]=a[i-1][j]+a[i-1][j-1];
   printf("%3d ",a[i][j]); 

    if(i==j)
   printf("\n");
  }
 }   
   return 0;
}
  
