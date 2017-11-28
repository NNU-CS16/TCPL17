#include<stdio.h>

int my_strcmp(const char* str1, const char* str2)
{
	int flag;
	while(*str1!='\0'&&*str2!='\0')
	{
		if(*str1==*str2)
			flag=0;
		else if(*str1>*str2)
			flag=1;
		else
			flag=-1;
		str1++;
		str2++;
	}
	return flag;
}

int main()
{
	char str1[100];
	scanf("%s",str1);
	char str2[100];
	scanf("%s",str2);
	printf("%d",my_strcmp(str1,str2));
	return 0;
}
