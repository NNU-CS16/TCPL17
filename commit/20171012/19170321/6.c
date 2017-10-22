#include<stdio.h>
 
int main()
{
   int i,j,k,n,a,b,c;

    printf("Please input the number of row:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n-i;j++)
          printf(" ");
       for(k=1;k<=2*i-1;k++)
          printf("*");
      printf("\n");
  }
  
    for(a=1;a<=n-1;a++)
    {
       for(b=1;b<=a;b++)
       printf(" ");
       for(c=1;c<=2*(n-a)-1;c++)
       printf("*");
       printf("\n");
    }  
 
   return 0;
}
