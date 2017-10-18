#include <stdio.h>
int main ()
{
   int i,j,k,a,b,d,N;
   scanf("%d",&N);
   N=5;
   for(i=1;i<=N;i++)
   {
     for(j=1;j<=N-i;j++)
         printf(" ");
     for(k=1;k<=2*i-1;k++)
         printf("*");
         printf("\n");
   }
   for(a=N-1;a>0;a--)
   {
     for(b=1;b<=N-a;b++)
         printf(" ");
     for(d=1;d<=2*a-1;d++)
         printf("*");
         printf("\n");
   }
     return 0;
}
