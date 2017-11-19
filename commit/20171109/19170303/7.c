#include<stdio.h>
int c(int n,int k)
{
    if(n == k)
        return 1;
    else
        if (k == 1)
            return n;
        else
            return c(n - 1, k) + c(n - 1, k - 1);
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d\n",c(n,k));
    return 0;
}
