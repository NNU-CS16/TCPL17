#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);
int main()
{
	char str[50];
	gets(str);
	if (is_str_pal(str))
		printf("%d",0);
	else
		printf("%d", -1);
}
int is_str_pal(const char* str)
{
	char i, j;
	int flag = 1;
	for (i = 0, j = strlen(str)-1; j>=i; i++, j--)
	{
		if (str[i] != str[j])
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

