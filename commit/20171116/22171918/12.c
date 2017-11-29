#include <stdio.h>
int my_strcmp(const char *str1,const char *str2);
int main()
{
	char str1[1000], str2[1000];
	scanf("%s%s", str1, str2);
	printf("%d\n", my_strcmp(str1, str2);
	return 0;
}
int my_strcmp(const char *str1,const char *str2)
{
	int i;
	for (i = 0; i != '\0'; i++)
	{
		if (str1[i] != str2[i])
			break;
		else 
			return 0;
	}
	if (str1[i] > str2[i])
		return 1;
	else
		return -1;
}
		
