#include<stdio.h>
int main()
{
 int i,j,k,n;
 printf("please input the number of n:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
   printf(" ");
  for(k=1;k<=2*i-1;k++)
   printf("*");
  printf("\n");
 }
 for(i=1;i<=n;i++)
 {
 for(j=0;j<=i-1;j++)
  printf(" ");
 for(k=0;k<=2*n-2*i-2;k++)
  printf("*");
 printf("\n");
 }
 return 0;
}
