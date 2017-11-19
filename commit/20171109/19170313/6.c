#include <stdio.h>
void Move(char d, char e);
void Hanoi(int n, char a, char b, char c, int *g);
int main()
{
    int *g;
    int j = 0;
    g = &j;
    int n;
    scanf("%d", &n);
    Hanoi(n, 'A', 'B', 'C', g);
    printf("%d\n", *g);
    return 0;
}
void Move(char d, char e)
{
    printf("%c->%c\n", d, e);
}
void Hanoi(int n, char a, char b, char c, int *g)
{
    if (n == 1)
    {
        Move(a, b);
        (*g)++;
        Move(b, c);
        (*g)++;
        return;
    }
    if (n >= 2)
    {
        Hanoi(n - 1, a, b, c, g);
        Move(a, b);
        (*g)++;
        Hanoi(n - 1, c, b, a, g);
        Move(b, c);
        (*g)++;
        Hanoi(n - 1, a, b, c, g);
        return;
    }
}
