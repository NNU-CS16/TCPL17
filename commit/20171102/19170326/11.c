#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
	int len;
	int i;
	len=strlen(str);
	char arr[len];
	for(i=0;i<=len;i++)
		arr[i]=str[len-1-i];
	printf("%s\n",arr);
}
int main()
{
	char* str="homework";
	reverse(str);
	return 0;
}

	
