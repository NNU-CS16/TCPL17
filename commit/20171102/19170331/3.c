#include <stdio.h>
int is_pow2(int n)
{
    
    if (n%2!=0)
    {
        printf("-1");
    }
    else
    {
        printf("0");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    is_pow2(a);
    return 0;
}

