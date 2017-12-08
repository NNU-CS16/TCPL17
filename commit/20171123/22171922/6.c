#include<stdio.h>
#include<string.h>

int count_substr(const char *str,const char *substr );
int main()
{
	char str[1000],substr[1000];
	scanf("%s",str);
	scanf("%s",substr);
	printf("%d\n",count_substr(str,substr));
	return 0;
}

int count_substr(const char *str,const char *substr )
{

	int flag = 0;
	int len1 = strlen( str );
	int len2 = strlen( substr );
	for ( int i = 0; i <= len1 - len2; i++ )
		if ( strncmp( str + i, substr, len2 ) == 0 )
		{
			flag++;
			i += len2 - 1;
		}
	return flag;
}
