#include <stdio.h>
int add(int n1, int n2);
int main()
{
    int n1, n2, s;
    printf("请输入n1, n2:\n");
    scanf("%d%d", &n1, &n2);
    s = add(n1, n2);
    printf("%d + %d = %d\n", n1, n2, s);
}
int add(int n1, int n2)
{
    int s, a, b;
    s = n1 ^ n2;
    a = n1 & n2;
    while(a != 0)
    { 
    a = a<<1;
    b = s;
    s = s ^ a;
    a = b & a;
    }
    return s;
}
