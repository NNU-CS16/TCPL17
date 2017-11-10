#include<stdio.h>

int is_pow2(int n)
{
    int a,flag;
    a=n-1;
    flag=a&n;
    if (flag==0){return 0;}
    else return -1;
}
    int main()
{
    int n;
    scanf("%d\n",&n);
    printf("%d\n",is_pow2(n));
}

