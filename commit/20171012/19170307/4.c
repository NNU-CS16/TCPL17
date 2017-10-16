#include<stdio.h>
int main()
{
    int n,m,k=1,sum=0;
    for(n=1;n<=10;n++) {
    m=n;
    k=m*k;
    sum=sum+k;
}
    printf("%d",sum);
    return 0;
}
