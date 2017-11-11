#include <stdio.h>
int fac_bit_count(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fac_bit_count(n));
    return 0;
}
int fac_bit_count(int n)
{
    int m, i=1, c, s = 1;
    while (n > 0)
    {
	n = n * i;
	s = s * n;
	n--;
    }
    while (s != 0)
    {
	s = s / 10;
	c++;
    }
    return c;
}
    


