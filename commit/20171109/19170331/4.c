#include <stdio.h>
#include <math.h>
long int f(int n,int k)
{
    long int sum=0;
    int i;
    if (n<=k) return pow(2,n-1);
    else
    {
        for (i=1;i<=k;i++)
            sum+=f(n-i,k);
        return sum;
    }
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    printf("%ld\n",f(n,k)%100007);
    return 0;
}

