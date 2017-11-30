#include <stdio.h>
#include <string.h>
int my_strcpy(char* dest, const char* scr);
int main()
{
	char dest[50];
	char scr[50];
	printf("Please input scr:");
	scanf("%s",scr);
	my_strcpy(dest,scr);
	return 0;
}

int my_strcpy(char* dest, const char* scr)
{
	int len = strlen(scr);
	int i;
	for (i = 0; i <= len; i++)
	{
		dest[i] = scr[i];
	    printf("%c", dest[i]);
	}
	printf("\n");
}	
