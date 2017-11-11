#include <stdio.h>

int is_pow2(int n)
{
    int t=2;
    while (t<n) t<<=1;
    if (t==n) return 0;
    else return -1;
}

int main()
{

    int n;
    scanf("%d",&n);

    printf("%d\n",is_pow2(n));

    return 0;

}
