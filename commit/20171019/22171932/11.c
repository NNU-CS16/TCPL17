#include<stdio.h> 
 #define M 10 
  void main()
  {
  int a[M][M], i , j ; 
  for(i=0;i<M;i++)
  for(j=0;j<=i;j++)
  {
  if(i==j||j==0)
  a[i][j]=1;
  else
  a[i][j]=a[i-1][j]+a[i-1][j-1];
  printf("%5d",a[i][j]);
  if(i==j)printf("\n"); 
  }
  }
  金字塔型杨辉三角：
  #include<stdio.h>
  void main() 
  {
  int a[10][10],i,j; 
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
  }
