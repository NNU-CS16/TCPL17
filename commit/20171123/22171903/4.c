#include <stdio.h>

int add(int n1, int n2);
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", add(n, m));
    return 0;
}

int add(int n1, int n2)
{
    int i;
    for (i = 0; i < n2; i++)
    {
	n1++;
    }
    return n1;
}
