#include <stdio.h>
int main()
{
  int i,j,k,n,m;
  printf("please input the number:");
  scanf("%d",&n);

  m=(n+1)/2;
  for(i=1;i<=m;i++)
{

  for(j=1;j<=10-i;j++)
     printf(" ");
  for(k=1;k<=2*i-1;k++)
     printf("*");
    printf("\n");
}

  for(i=(n-1)/2;i>=1;i--)
 { for(j=1;j<=10-i;j++)
      printf(" ");
   for(k=1;k<=2*i-1;k++)
      printf("*");
      printf("\n");
 }

   return 0;
}
