#include <stdio.h>
int main()
{
    int i,n,a,sn;
    int sum,q;
    printf("Input a and sn:\a");
    scanf("%d%d",&a,&sn);
    q=a;
    sum=0;
    for(i=1;i<=sn;i++)
{
    sum+=q;//累加每次a的新值
    q=q*10+sn;
}
    printf("%d\n",sum);
    return 0;
}
