#include <stdio.h>
int main()
{
    int A, B, D, i, m, n;
    int s[100];
    scanf("%d %d %d", &A, &B, &D);
    m = A + B;
    if (m == 0)
	printf("0\n");
    while (m != 0)
    {
	s[n++] = m % D;
	m = m / D;
    }
    for (i = n - 1; i >= 0; i--)
	printf("%d", s[i]);
    printf("\n");
    return 0;
}

