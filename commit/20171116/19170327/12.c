#include <stdio.h>
#include <string.h>
int my_strcmp(const char* str1, const char* str2);


int main()
{
	char str1[100],str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	printf("%d\n",my_strcmp(str1,str2));
	return 0;
}


int my_strcmp(const char* str1, const char* str2)
{

	for(;*str1 == *str2 && *str1 != '\0' && *str2 != '\0' ;)
	{
		str1++;
		str2++;
	}
	if(*str1 < *str2)
		return -1;
	else if(*str1 > *str2)
		return 1;
	else
	       	return 0;
}

