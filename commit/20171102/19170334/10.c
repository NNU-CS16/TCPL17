#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	gets(str);
	printf("%d\n",is_str_pal(str));
	return 0;
}

int is_str_pal(const char* str)
{
	int begin = 0;
	int end = strlen(str) - 1;
	if(str == NULL)
	return 0;
	else
	{
		while(begin < end)
		{
			if(str[begin] == str[end])
			return 0;
			else
			{
				return -1;
				break;
			}
			begin++;
			end--;
		}
	}
}
