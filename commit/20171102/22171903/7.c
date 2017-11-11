#include <stdio.h>

int GCD_recursive(int m, int n);
int GCD_iterative(int m, int n);
int main()
{
    int m, n, o;
 
    scanf("%d%d", &m, &n);
    printf("如果想通过递归方法运行请按1 如果想通过循环方法运行请按2\n");
    scanf("%d", &o);
    if (o = 1)
        m = GCD_recursive(m, n);
    else
        m = GCD_iterative(m, n);
    printf("%d\n", m);
   
    return 0;
}

int GCD_recursive(int m, int n)
{ 
     if (n == 0)
        return m;
     return GCD_recursive(n, m % n);
}

int GCD_iterative(int m, int n)
{
    int b;
    for ( ; n != 0; )
    {
        b = m % n;
        m = n;
        n = b;
    }
    return m;
}
