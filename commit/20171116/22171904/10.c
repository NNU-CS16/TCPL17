#include <stdio.h>

int my_strlen(const char* str)
{
	int lengh=0;
	while(*str++ !=0)
	{	
		lengh++;
	}
	return lengh;
}

int main()
{
	char str[100];
	printf("请输入字符:\n");
	scanf("%s",str);
	int a;
	a=my_strlen(str);
	printf("%d\n",a);
	return 0;

}
