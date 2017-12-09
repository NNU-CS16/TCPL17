#include<stdio.h>
#include<string.h>

int count_substr(const char *str, const char* substr)
{
	int len;
	int count = 0;
	int num = 0;
	char *temp = (char*)substr;

	len = strlen(substr);

	while (*str != '\0')
	{
		if (*str== *temp)
		{
			while ((*str == *temp) && (*str != '\0') && (*temp != '\0'))
			{
				num++;
				str++;
				temp++;
			}
			if (num == len)
			{
				count++;
			}
			num = 0;
			temp = (char*)substr;
		}
		else
		{
			str++;
		}
	}

	return count;
}

int main()
{
	char str[50];
	char substr[50];
	int num;

	printf("str:");
	scanf("%s",str);
	printf("substr:");
	scanf("%s",substr);

	num = count_substr(str, substr);

	printf("%d\n",num);

    return 0;
}
