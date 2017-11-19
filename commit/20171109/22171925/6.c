#include <stdio.h>
void Move (char a, char b );
void H (int n, char a, char b, char c);
int main ()
{
    int n;
    scanf ("%d", &n);
    H (n, 'A', 'B', 'C');
    return 0;
}
void Move (char a, char b)
{
    printf ("%c->%c\n", a, b);
}
void H (int n, char a, char b, char c)
{
    if (n == 1)
    {
        if (b == 'B')
        {
            Move (a, b);
            Move (b, c);
        }
        else 
            Move (a, c);
    }
    else 
    {
        if (b == 'B')
        {
            H (n-1, a, b, c);
            Move (a, b);
            H (n-1, c, b, a);
            Move (b, c);
            H (n-1, a, b, c);
        }
    else 
    {
        H (n-1, a, c, b);
        Move (a, c);
        H (n-1, b, a, c);
    }
    }
}
