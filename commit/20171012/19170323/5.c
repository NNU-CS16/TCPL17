#include <stdio.h>
int main()
{
  int i,j,n;
  
  for(i=1;i<=9;i++)
    for(j=1;j<=i;j++)
{
     n=i*j;  printf("%2d*%2d=%2d",i,j,n);
}   

   printf("\n");

   return 0;
}
