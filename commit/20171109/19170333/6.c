#include <stdio.h>
static int count = 0;
void move (int n, char a, char b, char c, int *p)
{
    if (1 == n)
    {
        printf("%c-->%c\n", a, b);
        (*p)++;
        printf("%c-->%c\n", b, c);
        (*p)++;
    }
    else
    {
        move (n-1, a, b, c, &count);
        printf ("%c-->%C\n", a, b);
        (*p)++;
        move (n-1, c, b, a, &count);
        printf ("%c-->%c\n", b ,c);
        (*p)++;
        move (n-1, a, b, c, &count);
    }
}
int main ()
{
    int n;
    int *p;
    p = &count;
    char a, b, c;
    scanf ("%d", &n);
    move (n, 'a', 'b', 'c', &count);
    printf ("%d\n", count);
    return 0;
}
