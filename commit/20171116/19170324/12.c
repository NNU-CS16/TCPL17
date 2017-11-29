#include <stdio.h>

int my_strcmp(const char* str1, const char* str2)
{
	int flag = 0, i;
	for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
		if (str1[i] != str2[i])
		{
			flag = 1;
			break;
		}
	if (flag == 1)
		return -1;
	if (flag == 0)
		return 0;
}

int main()
{
	char str1[100], str2[100];
	scanf("%s", str1);
	scanf("%s", str2);
	printf("%d\n", my_strcmp(str1, str2));

	return 0;
}	
