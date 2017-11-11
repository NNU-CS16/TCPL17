#include <stdio.h>

void triangle_judge(int a,int b,int c)
{
    int z, m, n;
    z = (a >= b ? a : b) >= c ? (a >= b ? a : b) : c;
    if (z == a)
    {
        m = b + c;
        n = b;
    }
    if (z == b)
    {
        m = a + c; n = c;
    }
    else
    {
        m = a+b; n = a;
    }
    if (m > z && m == 2*n && m == 2*z)
        printf("it's a equilateral triangle\n");
    if (m > z && m == 2*n && m != 2*z)
        printf("it's a isosceles triangle\n");
    if (m <= z)
        printf("it's not a triangle\n");
    if (m > z && m != 2*n && m != 2*z)
        printf("it's a normal triangle\n");
}
int main()
{
   int a, b, c;
   scanf("%d,%d,%d",&a,&b,&c);
   triangle_judge(a,b,c);
   return 0;
}
