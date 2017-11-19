#include <stdio.h>
int type(int n,int a,int b)
{
    if (n == 2)
	return b;
    return type(n-1, b, a+b) % 100007;
}

int main( )
{
    int n;
    printf ("输入大于等于1的整数：");
    scanf ("%d", &n);
    printf("%d\n", type(n,1,1));
    return 0;
}
