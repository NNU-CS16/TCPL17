#include <stdio.h>
int is_pow2(int n);

int main()
{
    int a;
    printf("Please input a:");
    scanf("%d",&a);
    if(is_pow2(a))
        printf("yes");
    else
        printf("no");
    return 0;
}

int is_pow2(int n)
{
    {
    if((n&(n-1))!=0)
        return 0;
    }
    return -1;
}
