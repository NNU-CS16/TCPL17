#include <stdio.h>
int main()
{
 int i,j,n;
 for(j=1;j<10;j++)
 printf("%d",j);
 for(i=1;i<=j;j++)
 {
  n=i*j;
  printf("%d",n); 
 }
 return 0;
}
