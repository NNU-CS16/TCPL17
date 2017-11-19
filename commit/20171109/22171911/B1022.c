#include <stdio.h>
int main( )
{
    int A, B, C, D, a[50], i = 0, E;
    scanf ("%d%d%d", &A, &B, &D);
    C = A + B;
    while (C != 0)
    {
	E = C % D;
	a[i] = E;
	C = C / D;
	i++;
    }
    for ( ; i >= 0; i--)
    {
	printf ("%d", a[i]);
    }
    return 0;
}
