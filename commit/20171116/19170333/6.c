#include <stdio.h>
#include <string.h>
void k_reverse (char* str, int k)
{
    int len, i, j = 1, n, m;
    len = strlen (str);
    n = len / k;
    m = k;
    while (j <= n)
    {
        for (i = k - 1; i >= m * (j - 1); i--)
            printf("%c", str[i]);
        k *= 2;
        j++;
    }
    for (i =n * m; i < (len % k); i++)
        printf ("%c", str[i]);
}
int main ()
{
    char str[20];
    int k;
    scanf ("%d", &k);
    scanf ("%s", str);
    k_reverse (str, k);
    printf ("\n");
    return 0;
}
