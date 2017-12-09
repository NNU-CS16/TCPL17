#include <stdio.h>
//int f(int n);

int f(int n)
{   
    if (n%2!=0)
        return n;
    else
        return f(n/2);
}

int main()
{
    int n;
    int sum=0,i;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
        sum+=f(i);
    printf("%d\n",sum);
    return 0;
}
