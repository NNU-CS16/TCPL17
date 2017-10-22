#include<stdio.h>
int main()
{
    int n,j,k,t,s;
    scanf("%d",&n);
    t=n%10;
    k=n/10%10;
    j=n/100;
    s=t*100+k*10+j;
    printf("%d\n",s);

    return 0;
}
