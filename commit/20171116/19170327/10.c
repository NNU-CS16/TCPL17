#include <stdio.h>
int my_strlen(const char* str)
{
	int count = 0;
	if(*str == '\0')
		return 0;
	else
	{
		for(count = 0;*str != '\0';)
		{
			str++;
			count++;
		}
		return count;
	}
}

int main()
{
	char str[100];
	scanf("%s",str);
	printf("%d",my_strlen(str));
	return 0;
}

