#include<stdio.h>
int main()
{
  int i,j,k,n;
  printf("the number of row you like is");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
      for(j=1;j<=n+1-i;j++)
        printf(" ");
      for(k=1;k<=2*i-1;k++)
        printf("*");
      printf("\n");
  }
      for(i=n-1;i>0;i--)
  {  
      for(j=n-i;j>=0;j--)
        printf(" ");
      for(k=2*i-2;k>=0;k--)
        printf("*");
        printf("\n");

  }
   return 0;
}
