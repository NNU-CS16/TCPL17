#include <stdio.h>
    void print_hex (int a);
    int main ()
    {
        int n;
        scanf ("%d",&n);
        print_hex (n);
        return 0;
    }
    void print_hex(int a)
    {
        int i = 0, j;
        int b[20];
        char spell[] = "0123456789abcde";
    while(1)
    {
        b[i] = a % 16;
        a = a / 16;
        if (a < 16)
        break;
        i++;
    }
    b[i + 1] = a;
    for (j = i + 1;j >= 0;j--)
    printf("%c",spell[b[j]]);
    }

