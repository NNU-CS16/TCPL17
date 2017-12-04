#include <stdio.h>

 int add(int n1, int n2)
{
    int a, b;
    if (n2 == 0)
        return n1;
    a = n1 ^ n2;
    b = (n1 & n2) << 1;
    return add(a, b);
}

 int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    int sum = add(n1, n2);
    printf("%d\n", sum);
    return 0;
}
