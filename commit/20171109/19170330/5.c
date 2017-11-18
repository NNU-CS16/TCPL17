#include <stdio.h>

int step(int n)
{
    if (n==1)
        return 2;
    else 
        return 2*step(n-1)+2;
}

int main ()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",step(n));
    return 0;
}

