#include<stdio.h>
#include<math.h>
int c(int x,int y)//第x行第y个元素
 { 
  int z;
  if(y==1||y==x)
    return 1;
    z=c(x-1,y-1)+c(x-1,y);
    return z;
 }


int main()
{
   int n,i,j;//n为行数
   scanf("%d",&n);
  
   for(i=1;i<=n;i++)
  {
    for(j=1;j<2*n-2*i+1;j++)
      printf(" ");//空格
      for(j=1;j<=i;j++)
       printf("%4d",c(i,j));//空隙
  
     printf("\n");
   }
  return 0;
}
 
 

