#include<stdio.h>
int main(void)
{
    int N;
    scanf("%d",&N);
    int i,j,k,l;
    j=sqrt((N+1)/2);
    for(i=0;i<=j;i++)
    {
       for(k=1;k<=i;k++)
       printf(" ");
       for(l=1;l<=2*(j-i)-1;l++)
       printf("*");
       printf("\n");
    }
    for(i=1;i<=j-1;i++)
    {
       for(k=1;k<=j-i-1;k++)
       printf(" ");
       for(l=1;l<=2*i+1;l++)
       printf("*");
       printf("\n");
     }
     return 0;
}

