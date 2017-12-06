#include <stdio.h>
#include <string.h>

int substr(const char* str, const char* substr);
int main()
{
    const char* a;
    const char* b;
    char c[100], d[100];
    gets(c);
    gets(d);
    a = c;
    b = d;
    printf("%d\n", substr(a, b));

    return 0;
}

int substr(const char* str, const char* substr)
{
    int m, n, i, j;
    m = strlen(str);
    n = strlen(substr);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
	{
	    if (str[i + j] != substr[j])
		break;
	}
 	if (j == n)
	    break;
    }
    if (j == n)
	return i;
    else
	return -1;
}
