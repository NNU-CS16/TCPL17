#include <stdio.h>

int num(int n)
{
    int t;
    scanf("%d",&n);
    for (t=n;t>0;t--)
    {
        while (n%t==0 && t%2==1)
        return t;
             
    }
     
}

int main ()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum = sum + num(i);
    }
    printf("%d\n",sum);
    return 0;
}

