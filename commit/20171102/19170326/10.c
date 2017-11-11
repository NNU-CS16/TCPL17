#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
	int i;
	int len;
	len=strlen(str);
	int flag=0;
	for(i=0;i<=len-1;i++)
	{
		if(str[i]!=str[len-1-i])
			flag=-1;
	}
	return flag;
}
int main()
{
	char* str;
	str="12331";
	printf("%d",is_str_pal(str));
	return 0;
}
