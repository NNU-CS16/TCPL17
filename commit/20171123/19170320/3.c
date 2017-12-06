#include <stdio.h>
int f(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}

int f(int n)
{
    int sum=0;
    (n>0) && ( sum=n+f(n-1) );
    return sum;
}
