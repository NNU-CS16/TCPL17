#include<stdio.h>
int main(void)
{
    int i,a,b,c,j;
    printf("input a three digit number:\n");
    scanf("%d",&i);
    a=i/100;
    b=(i-a*100)/10;

    c=i-a*100-b*10;
    j=c*100+b*10+a;
    printf("%d",j);
    return 0;
}
