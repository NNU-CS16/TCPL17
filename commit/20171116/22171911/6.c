#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k)
{
    int m, n, len, i = 0, j;
    len = strlen(str);
    m = len / k;
    n = m * k;
    while (i <= n -k )
    {
	j = str[i];
	str[i] = str[i+k-1];
	str[i+k-1] = j;
	i = i + k;
    }
    printf ("%s", str);
}
int main( )
{
    int k;
    char *str;
    printf ("请输入k：");
    scanf ("%d", &k);
    printf ("请输入字符串：");
    scanf ("%s", str);
    k_reverse(str, k);
    return 0;
}
