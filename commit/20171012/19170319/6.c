#include<stdio.h>
int main()
{
 int n,i,j,x;
 printf("please enter n\n");
 scanf("%d",&n);
 for(i=1;i<=n;i=i+2)
    {
     for(j=(n-i)/2;j>=1;--j)
       printf(" ");
     for(x=1;x<=i;++x)
       printf("*");
     for(j=(n-i)/2;j>=1;--j)
       printf(" ");
     printf("\n");
    }
 for(i=n-2;i>=1;i=i-2)
    {
     for(j=(n-i)/2;j>=1;--j)
       printf(" ");
     for(x=1;x<=i;++x)
       printf("*");
     for(j=(n-1)/2;j>=1;--j)
       printf(" ");
     printf("\n");
    }
 return 0;
}
