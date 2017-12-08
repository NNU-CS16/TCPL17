#include <stdio.h>
int add (int n1, int n2)
{
    int n, m;
    if (n2 == 0)
        return n1;
    else
        n=n1^n2;
        m=( n1 & n2 )  << 1;
        return add ( n, m );

}
int main ()
{
    int n1, n2;
    scanf ("%d %d", &n1, &n2);
    printf ("%d\n", add (n1, n2));
    return 0;
}

