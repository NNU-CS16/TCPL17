#include<stdio.h>
#include<string.h>
int main()
{
	char s[80];
	int i,n;
	gets(s);
	n=strlen(s);
	for(i=n;i>0;i--)
		if(s[i]==' ')
		{
			printf("%s ",&s[i+1]);
			s[i]='\0';
		}
			printf("%s",s);

	return 0;
}

