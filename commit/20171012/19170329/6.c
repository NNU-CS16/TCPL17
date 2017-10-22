#include<stdio.h>
int main()
{
   int i,j,k,n;

  
   scanf("%d",&n);
if(n<13)
   
 { 
   for(i=1; i<=n;i++)
   {
      for(j=1;j<=n-i;j++)
         printf(" ");
      for(k=1;k<=2*i-1;k++ )
         printf("*");
      printf("\n");  
   }
   for(i;i>n&&i<2*n;i++)
   {
      for(j=1;j<=i-n;j++)
         printf(" ");
      for(k=1;k<=2*(2*n-i)-1;k++ )
         printf("*");
      printf("\n");

   }
   }
   return 0;
}
