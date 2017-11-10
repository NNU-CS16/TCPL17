#include <stdio.h>
int is_int_pal(int n);
int main ()
{
	int n;
    scanf("%d", &n);
    printf("%d\n", is_int_pal(n));
  return 0;
}
int is_int_pal(int n)
{
	int i = 0, j = n;
    while (j)
    {
		i = i*10+j%10;
        j/=10;
    }
    if (i == n)
    return 0;
    else
    return -1;
}
