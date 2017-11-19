#include <stdio.h>
void djz(int c, int d);
int main()
{
    int a, b, d;
    scanf("%d%d%d", &a, &b, &d);
    djz(a + b, d);
    return 0;
}

void djz(int c, int d)
{
    int f[30];
    int i = 0, j;
    while (c > 0)
    {
	f[i] = c % d;
	c = c / d;
	i++;
    }
    for (j = 0; j < i; j++)
       printf("%d", f[i - 1 - j]);
    printf("\n");
}
