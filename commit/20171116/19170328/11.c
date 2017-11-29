 #include <stdio.h>
void my_strcpy(char *dest, const char *src)
{
	if ((dest == NULL)||(src == NULL))
		dest = NULL;
	char *ret = dest;
	while ((*dest++ = *src++) != '\0');

	dest = ret;
}

 int main()
{
	char str1[10], str2[10] = {"HelloWorld"};
	
	my_strcpy(str1, str2);
	printf("%s\n", str1);
	return 0;
}

