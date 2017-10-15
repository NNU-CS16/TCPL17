#include<stdio.h>
int main()
{
  int i,j,n;
 for(i=1;i<=9;i++)
  {
    for(j=1;j<=i;j++)
   { n=i*j;
    printf("%d*%d=%d  ",j,i,n);
   }
   printf("\n");  
  }
   return 0;




}
