#include<stdio.h>

void my_strcpy(char* dest, const char* src)
{
	while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
}

int main()
{
	char src[50];
	char dest[50];
	scanf("%s",src);
	my_strcpy(dest,src);
	printf("%s",dest);
	return 0;
}
		
