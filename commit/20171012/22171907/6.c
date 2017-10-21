#include<stdio.h>
int main()
{
    int i,j;
    int s;
    printf("s=");
    scanf("%d",&s);
    printf("Output:\n");
    for(i=1;i<=s;i++)
{
    for(j=1;j<=s+1-i;j++)
    printf(" ");
    for(j=1;j<=2*i-1;j++)
    printf("*");
    printf("\n");
}
    for(i=s-1;i>0;i--)
{
    for(j=s-i;j>=0;j--)
    printf(" ");
    for(j=2*i-2;j>=0;j--)
    printf("*");
    printf("\n");
}
}
