#include<stdio.h>
#include<string.h>
int check(char*,char*);
int main()
{
int i;
char str[100],substr[100];
fgets(str,100,stdin);fgets(substr,100,stdin);
str[strlen(str)-1]='\0';substr[strlen(substr)-1]='\0';
printf("%d\n",check(str,substr));
return 0;
}

int check(char* str,char* substr)
{
int i,j;
for (i=0;i<strlen(str)-strlen(substr);i++)
	{
	for (j=0;j<strlen(substr);j++)
		{
		if (str[i+j]==substr[j])
		continue;
		else break ;
		}
	if (j==strlen(substr))
	return i;
	}
return -1;
}
