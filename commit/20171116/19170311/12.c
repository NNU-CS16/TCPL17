#include<stdio.h>
int my_strcmp(char*,char*);
int main()
{
    char str1[1000],str2[1000];

    scanf("%s%s",str1,str2);
    printf("%d\n",my_strcmp(str1,str2));

    return 0;
}
int my_strcmp( const char *str1, const char *str2 )
{

	while ( *str1 == *str2 && *str1 != '\0' && *str2 != '\0' )
	{
		str1++;
		str2++;
	}
	if ( *str1 > *str2 ) return 1;
	if ( *str1 < *str2 ) return -1;

	return 0;

}
