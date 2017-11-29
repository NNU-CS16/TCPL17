#include <stdio.h>
#include <string.h>

int my_strcmp(const char* str1, const char* str2);
int main()
{
    const char* str1;
    const char* str2;
    char a[20], b[20];
    gets(a);
    gets(b);
    str1 = a;
    str2 = b;
    printf("%d\n", my_strcmp(str1, str2));
    return 0;
}

int my_strcmp(const char* str1, const char* str2)
{
    int i, a = 0;
    int m, n;
    m = strlen(str1);
    n = strlen(str2);
    if (m > n)
	m = n;
    for (i = 0; i < n + 1; i++)
    {
	if (str1[i] == str2[i] && i < n)
	    continue;
    	if (str1[i] == str2[i] && i == n)
	    return a;
  	if (str1[i] < str2[i])
	{
	    a = -1;
	    return a;
	}
	if (str1[i] > str2[i])
	{
	    a = 1;
	    return a;
	}
    }

}
