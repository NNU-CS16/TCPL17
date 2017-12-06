#include <stdio.h>
#include <string.h>

int count_substr(const char* str, const char* substr);
int main()
{
    char a[100], b[20];
    gets(a);
    gets(b);
    printf("%d\n", count_substr(a, b));
    return 0;
}

int count_substr(const char* str, const char* substr)
{
    int a, b, i, n = 0;
    a = strlen(substr);
    b = strlen(str);
    for (i = 0; i < strlen(str); )
    {
	if (strncmp(str + i, substr, a) == 0)
	    n++;
     	i = i + a;
    }
    if (n == 0)
     	return -1;
    else
	return n;
}   
