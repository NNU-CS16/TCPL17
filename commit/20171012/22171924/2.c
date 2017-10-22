#include<stdio.h>
int main()
{
    int n,sum;
    sum=0;
    for(n=1;n<=99;n++)
    sum+=n*(n+1)*(n+2);

    printf("sum=%d\n",sum);

    return 0;
}
