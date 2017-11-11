#include<stdio.h>
int LCM(int m,int n)
{
    int k;
    k=n;
    n=m;
    m=k;
    k=n%m;
    if (k==0) return m;
    else return LCM(m,k);
}

int main()
{
    int m,n,max,min;
    printf("Please input two number.\n");
    scanf("%d %d",&m,&n);
    max=m>n?m:n;
    min=m<n?m:n;
    m=max;
    n=min;
    printf("%d\n",m*n/LCM(m,n));
    return 0;
}

