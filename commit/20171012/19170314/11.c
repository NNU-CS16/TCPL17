#include<stdio.h>
int main(void)
{
    int A,i,j,k;
    printf("input a num between 1and6:\n");
    scanf("%d",&A);
    for(i=A;i<A+4;i++)
    {
    for(j=A;j<A+4;j++)
    {
    for(k=A;k<A+4;k++)
    if(j!=k&&j!=i&&i!=k)
    printf("%d",i*100+j*10+k);
    }
    printf("%c",8);
    printf("\n");
    }
    return 0;
}


