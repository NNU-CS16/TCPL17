#include<stdio.h>
int main()
{
    int x,y,z,n=10;
    scanf("%d",&n);
   for(x=1;x<=n;x++)
   {
      for(y=1;y<=n-x;y++)
         printf(" ");
      for(z=1;z<=2*x-1;z++)
         printf("*");
         printf("\n");
    }
   for(x=1;x<=n-1;x++)
   {
      for(y=1;y<=x;y++)
         printf(" ");
      for(z=2*n-3;z>=x*2-1;z--)
         printf("*");
         printf("\n");
   }
      return 0;
}

         

         
      
