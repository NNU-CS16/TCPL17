#include<stdio.h>
int p(int x);
int main()
{   int x,n,m;
    scanf("%d",&x);
 for (int n = 1; n < x; n++)
{    
    for (int m = 1; m <= n; m++)
    printf("%d  ", p(n-1)/(p(n-m) * p(m-1)));
    printf("\n");
}
return 0;
}

int p(int x)
{
   long long int r = 1;
    if (x < 2) return r;
    for (int i = 2; i <= x; i++)
        r = r * i;
    return r;
}
