#include <stdio.h>
#include <string.h>
void reverse( char * s )
{
	int i,j,len;
	char a[100];

	len = strlen( s );
	
	for (i = 0; i < len / 2 ; i++)
	{
	 a[i] = s[i];
         s[i] = s[len-i-1];
	 s[len-i-1] = a[i];
	}
	for(i = 0; i < len ; i++)
         printf("%c",s[i]);

}

int main()
{
	char s[100];

	scanf("%s",s);

	reverse(s);
	
	printf("\n");

	return 0;

}
