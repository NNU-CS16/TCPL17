#include <stdio.h>
int main()
{
    int a, i, n, s;
    printf("请输入N：\n");
    scanf("%d", &n);
    s = 0;
    for(a = 1; a <= n; a++)
    {
        i = a;
        while((a%i != 0)||(i%2 != 1))
           i--;
        s = s + i;
    }
    printf("f(1) + f(2) + ... +f(%d) = %d\n", n, s);
    return 0;
}

