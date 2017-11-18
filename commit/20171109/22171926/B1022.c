#include <stdio.h>

int main()
{
    int A,B,D,x,k,j;
    int a[50]={0};
    scanf("%d%d%d",&A,&B,&D);
    x=A+B;
    for (k=0;x!=0;k++)
    {
        a[k]=x%D;
        x/=D;
     }
     for (j=k-1;j>=0;j--)
         printf("%d",a[j]);
     printf("\n");
     return 0;
} 
