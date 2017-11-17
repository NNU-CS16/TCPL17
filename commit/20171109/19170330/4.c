#include <stdio.h>

int step (int n, int k)
{
    int a[1000],i;
    scanf("%d%d",&n,&k);
    for (i=1;i<=k;i++)
        a[i]=1;
    for (i=2;i<=n;i++);
        {
            for (int j=1;j<=k&&j<=i;j++)
            {
                a[i]=(a[i]+a[i-j]) % 100007;
            }
        }
    printf("%d\n",a[i]);
    return 0;
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d\n", step(n,k));
    return 0;
}
