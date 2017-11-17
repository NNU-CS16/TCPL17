#include <stdio.h>
#include <string.h>
#define max 50
int is_str_pal(const char * str);
int main()
{
    const char str;
    gets(str);
    printf("%d\n", is_str_pal(str));
    return 0;
}
int is_str_pal(const char * str)
{
	char i, j, m, s[max];
	int flag;
	m = strlen(str);
	for (i = 0, j = m - 1; j > i; i++, j--)
	    if(s[i] != s[j])
	    {
		flag = -1;
	        break;
	    }
	    else
		flag = 0;
	return flag;
}
