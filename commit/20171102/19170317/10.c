#include <stdio.h>
#include <string.h>
int is_str_pal(const char *str);

int main()
{
	char a[10];
	printf("请输入一个整数:");
 	scanf("%s", a);
	const char *str = NULL;
	str = a;
	printf("%d\n", is_str_pal(str));
	return 0;
}

int is_str_pal(const char *str)
{
	int len = strlen(str);
	int i = 0, j = len - 1;
	int flag = 0;
	for ( ; j > i; ++i,--j)
 	{
	  if (str[i] != str[j])
	  {
		flag = -1;
		break;
	  }
	}
	return flag;
}
