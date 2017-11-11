#include <stdio.h>
void print_hex(int a);
int main()
{
    int a;
    scanf("%d", &a);
    print_hex(a);
    return 0;
}
void print_hex(int a)
{
    char j [ 17 ] = "0123456789ABCDEF";
    int m, n;
    m = a / 16;
    n = a % 16;
    printf("%c%c\n", j [ m ], j [ n ]);
    return;
}
