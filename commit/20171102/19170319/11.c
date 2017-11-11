#include <stdio.h>
#include <string.h>
void reverse(char* str)
{
	int i,j;
	char d[100];
	i = strlen(str);
	--i;
	for (j = 0;i >= 0;--i,++j)
	{
		d[j] = str[i];
	}
	d[j]='\0';
	printf("%s",d);
}
int main()
{
	char y[100];
	scanf("%s",y);
	reverse(y);
	return 0;
}
