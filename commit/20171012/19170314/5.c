#include<stdio.h>
int main(void)
{
    int i=1,j=1;
    for(i=1;i<=9;i++)
    for(j=1;j<=i;j++)
    {
        printf("%d*%d=%d",i,j,i*j);
        if(i!=j) 
        printf(" ");
        if(i==j)
        printf("\n");
    }
    return 0;
} 
