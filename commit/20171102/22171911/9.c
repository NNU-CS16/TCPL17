#include <stdio.h>
int is_int_pal(int n)
{
    int m=0,a;
    a = n;
    while (a % 10 > 0)
    {
        m = m * 10 + a % 10;
        a = a/10;        
    }
printf ("%d", -!(m==n));
}
int main( )
{
    int n;
    printf ("请输入一个整数:");
    scanf ("%d", &n);
    is_int_pal(n);
    return 0;
} 
