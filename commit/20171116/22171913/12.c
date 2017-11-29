#include <stdio.h>
int my_strcmp(const char* str1, const char* str2);
int main()
{
    char str1[20] = "Language";
    char str2[20];
    printf("Please input: ");
    gets(str2);
    int m = my_strcmp(str1, str2);
    printf("%d\n", m);
    return 0;
}
int my_strcmp(const char* str1, const char* str2)
{
    while ((*str1 != '\0') || (*str2 != '\0'))
    {
	if (*str1 == *str2)
	{
	    str1++;
	    str2++;
	    return 0;
	}
	
	else
	{
	    if (*str1 > *str2)
		return 1;
	    else
		return -1;
	}
        
    }
}

