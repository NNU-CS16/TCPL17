#include <stdio.h>
int my_strlen(const char* str);
int main()
{
	char str[50];
	int k;
	printf("Please input str:");
	scanf("%s",str);
	k = my_strlen(str);
	printf("该字符串有%d个字符.\n", k );
	return 0;
}

int my_strlen(const char* str)
{
	int len = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		len += 1;
		i++;
	}
	return len;
}

	
