#include <stdio.h>
#include <string.h>
int my_strcmp(const char* str1, const char* str2);
int main()
{
	char str1[50];
	char str2[50];
	int k;
	printf("Please input str1:");
	scanf("%s", str1);
	printf("Please input str2:");
	scanf("%s", str2);
	k = my_strcmp(str1,str2);
	if (k = 0)
		printf("str1 = str2");
	else if (k = -1)
		printf("str1 < str2");
	else 
		printf("str1 > str2");
	return 0;
}

int my_strcmp(const char* str1, const char* str2)
{
	int i = 0;
	while ((str1[i] == str2[i])&&(str2[i] != '\0'))
		i++;
    if ((str1[i] == '\0') && (str2[i] == '\0'))
		return 0;
	else if (str1[i] > str2[i])
		return 1;
	else
		return -1;
}
	
