#include <stdio.h>
#include <math.h>
int is_pow2(int n);
int main()
{
    int n;
    scanf("%d", &n);	
    printf("%d\n", is_pow2(n));
    return 0;
}
int is_pow2(int n)
{
    int i=1;	
    while (i <= n)
    {
	if (i == n)
	    return 0;
        i <<= 1;
    }
    return -1;
}
