#include <stdio.h>
int main()
{
    int n,m,x=0;
    printf("請輸入一個整數 ");
    scanf("%d",&n);
    m=n;
    while (n)
    {
        x=x*10+n%10;
        n/=10;
    }
    if (m=x)
    return -1;
    else
    return 0;
    return 0;
}
