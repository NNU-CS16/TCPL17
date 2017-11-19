#include <stdio.h>
int type(int n);

int main( )
{
    int n, k;
    scanf ("%d", &n, &k);
    printf ("%d", type(n));
    return 0;
}
int type(int n)
{
    int i, k;
    if (n <= 2)
        return 1;
    for( ; k > 1; k--) 
    {
	i = (type(n - k) + type(n - k + 1)) % 100007;
    }
}
    







