#include <stdio.h>
#include <string.h>
int is_str_pal(const char* str)
{
	int i,j;
	j = strlen(str);
	for (--j,i = 0;j >= 0;--j,++i)
	{
		if (str[i] != str[j])
			return -1;
	}
	return 0;
}
int main()
{
	int i = 0;
	char hw[100];
	scanf("%s",hw);
	printf("%d",is_str_pal(hw));
	return 0;
}
