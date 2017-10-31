#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[81];
	fgets(a,81,stdin);
	for(i=strlen(a);i>=0;i--)
	{	while(i>=0&&a[i]!=' ')
			printf("%s",&a[i+1]);
	if(i>=0)
	{
		a[i]='\0';
		printf(" ");
	}
	}
	return 0;
}

