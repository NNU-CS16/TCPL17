#include<stdio.h>
int main()
{ 
    int a,i,j,k,n,l;
    printf("please input the number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
       for(j=1;j<=12-i;j++)
           printf(" ");
       for(k=1;k<=2*i-1;k++)
           printf("*");
       printf("\n");
       }
    for(a=1;a<=n-1;a++)
       {
       for(j=j;j>=i;j=j-1)
           printf(" ");
       for(l=1;l<=2*(n-1-i)-1;l++)
           printf("*");
       printf("\n");
       }
   return 0;
}
