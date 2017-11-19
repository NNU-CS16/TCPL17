#include <stdio.h>
#include <math.h>
int sushu(int n)
{
    int i = 2;
    for ( ;i <= sqrt(n);++i)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n,m;
    int i = 0,x = 0;
    int j;
    scanf("%d%d",&m,&n);
    if (m > n)
    {
        j = m;
        m = n;
        n = j;
    }
    for (j = 2;i <= n;++j)
    {
        if (sushu(j) == 1)
        {
            i++;
            if ((m <= i) && (i <= n))
            {
                printf("%d ",j);
                x++;
            }
            if ((x != 0) && (x % 10 == 0))
                printf("\n");
        }
    }
    return 0;
}
