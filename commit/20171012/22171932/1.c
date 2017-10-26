#include<stdio.h>
int sum(int n);
int main()
{
    int n,s;
    printf("please input n:");
    scanf("%d",&n);
    s=sum(n);
    printf("2+4+6+...+%d=%d\n",n,s);
    return 0;
}
int sum(int n)
{
    int i,s=0;
    for(i=2;i<=n;i=i+2)
    s=s+i;
    return s;
}



