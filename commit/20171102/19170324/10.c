#include <stdio.h>
#include <string.h>
int is_str_pal(const char* str);

int main()
{
	const char str[100];
	scanf("%s", str);
	printf("%d\n", is_str_pal(str));

	return 0;
}

int is_str_pal(const char* str)
{
	int i, j, flag = 0;
	for(i = strlen(str), j = 0; i >= j; i--, j++)
	{
	    if (str[j] == str[i])
	    {
			flag = -1;
			break;
		}
	}

	return flag;
}
