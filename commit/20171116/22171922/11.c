#include <stdio.h>

void my_strcpy(char* dest, const char* src);
{
	int i = 0;
	while (src[i] != '\0')
	{
	  dest[i] = src[i];
	  ++i;
	}
	dest[i] = '\0';
}
