/*12.c_my strcmp*/
#include <stdio.h>
#include <string.h>

int my_strcmp(const char *str1,const char *str2)  
{
	int i, result;
	for(i = 0; i < strlen(str1) && i < strlen(str2); i++)
	{
		if (str1[i] == str2[i])
			result = 0;
		if (str1[i] < str2[i])
		{
			result = -1;
			break;
		}
		if (str1[i] > str2[i])
		{
			result = 1;
			break;
		}
	}
	if(str1[i] == '\0' && str2[i] != '\0')
		result = -1;
    else if(str1[i] != '\0' && str2[i] == '\0')
		result = 1;
	return result;  
}

int main()  
{
	int i, result;    
	char str1[1000],str2[1000];
	printf("请输入字符串str1  str2 :\n");
	gets(str1);
	gets(str2);
	printf("%d\n",my_strcmp(str1,str2));
	return 0;
}
