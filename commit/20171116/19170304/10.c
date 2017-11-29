#include <stdio.h>

int my_strlen( const char* str )
{
	int len = 0;
	while ( *str != '\0' )
	{
		len++;
		str++;
	}
	return len;
}

int main()
{
   char str[100];
   scanf("%s", str);
   printf("%d\n", my_strlen(str));

   return 0;
}
