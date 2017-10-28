#include<stdio.h>
int main()
{

int i,j,k,n;
scanf("%d", &n);
for(i=1;i<=n;i++)
{
   for(j=1;j<=13-i;j++)
      printf(" ");
    for(k=1;k<=2*i-1;k++)
       printf("*");
   printf("\n");
}
    for(i=n-1;i>=1;i--)
  {  
    for(j=i;j<=13-1;j++)
     printf(" ");
    for(k=1;k<=2*i-1;k++)
     printf("*");
     printf("\n");
   }

return 0;
}
