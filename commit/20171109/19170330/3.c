#include <stdio.h>
int num(int n,int r1,int r2)
{
    if (n==0||n==1)
        return r1;
    if (n==2)
        return r2;
    else 
        num (n-1, r2, r1+r2);
}

int main ()
{
    int n, out;
        scanf("%d", &n);
    out = num(n, 1, 2) % 100007;
        printf("%d\n", out);
    return 0;
}
