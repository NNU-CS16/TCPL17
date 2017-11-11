#include <stdio.h>
int is_int_pal(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", is_int_pal(n));
    return 0;
}
int is_int_pal(int n)
{
    int s = 0, t, m;
    t = n;
    while (n)
    {
	s = s * 10 + n % 10;
	n = n / 10;
    }
    if (t == s)
	return 0;
    else
	return -1;
}
