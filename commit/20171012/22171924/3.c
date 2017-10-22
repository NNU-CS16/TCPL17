#include<stdio.h>
int main()
{
    int a,n,i=0,sum=0;
    scanf("%d%d",&a,&n);

    while(i<=n)
{
    i=a*10+a;
    sum=sum+i;
    i++;
}
    printf("%d",sum);
    return 0;
}
