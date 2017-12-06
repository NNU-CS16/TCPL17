#include <stdio.h>
#include <string.h>
int Count_substr(const char* str, const char* substr);
int main()
{
    char str[1000];
    char substr[1000];
    printf("Please input: ");
    gets(str);
    printf("Please input: ");
    gets(substr);
    printf("%d\n", Count_substr(str, substr));
    return 0;
}
int Count_substr(const char*str, const char* substr)
{   
    char *p;
    int s, len;
    len = strlen(str);
    for (s = 0, p = str; s < len ; )
    {
	p = strstr(p, substr);
	if (p != NULL)
	{
            s++;
	    p += len;
	}
	else 
	    break;
    }
    return s;
}
