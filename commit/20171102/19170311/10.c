#include <stdio.h>
#include <string.h>
int is_str_pal( const char * str)
{
	int i,t,len;
	len = strlen(str);

	for (i = 0; i < len; i++)
        {
	if (str[i] != str[len-i-1])
	 t = -1;
	else
	 t = 0;
	}

	return t;

}

int main()
{
	char s[100];

	scanf("%s",s);

	printf("%d\n",is_str_pal(s));

	return 0;  

}
