#include<stdio.h>
int main(void)
{
    int i,j,k,l;
    scanf("%d",&i);
    if(i!=0)
    j=i%16;
    k=i/16;
    l=k*10+j;
    printf("%d",l);
    return 0;
} 

