#include <stdio.h>
#include <string.h>

int main()
{
	char str[64];
	gets(str);
	reverse(str);
	return 0;
}

void reverse(char* str)
{
	int begin = 0;
	int end = strlen(str) - 1;
	char a;
	while(begin < end)
	{
		a = str[begin];
		str[begin] = str[end];
		str[end] = a;
		begin++;
		end--;
	}
	printf("%s\n",str);
}
