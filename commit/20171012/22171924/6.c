#include<stdio.h>
int main()
{
     int i,j,m,n;
     printf("n=");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
{
     for(j=1;j<=n-i;j++)
     printf(" ");
     for(m=1;m<=2*i-1;m++)
     printf("*");
     printf("\n");
}
 
     for(i=1;i<=n;i++)
{
     for(j=0;j<=i-1;j++)
     printf(" ");
     for(m=0;m<=2*n-2*i-2;m++)
     printf("*");
     printf("\n");
}
     return 0;
}
