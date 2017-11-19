#include <stdio.h>
void move (int n, char a, char b, char c)
{
    if (n == 1)
        printf ("\t%c-->\t%c\n", a, c);
    else
    {
        move (n-1, a, c ,b);
        printf ("\t%c-->\t%c\n", a, c);
        move (n-1, b, a, c);
    }
    return ;
}
int main ()
{
    int n;
    char a, b, c;
    scanf ("%d", &n);
    move (n, 'a', 'b', 'c');
    return 0;
}
