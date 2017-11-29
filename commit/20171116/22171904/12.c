#include <stdio.h>


int my_strcmp(const char* str1,const char* str2)
{
	int i;
	int flag=0;
	for(i=0; ;i++)
	{
		if((*str1+i)>*(str2+i))
		{
			flag=1;
			break;
		}
		else if((*str1+i)<*(str2+i))
		{
			flag=1;
			break;
		}
	}
	return flag;
}

int main()
{
	int m;
	char str1[100],str2[100];
	printf("input two strings:\n");
	scanf("%s",str1);
	scanf("%s",str2);
	m=my_strcmp(str1,str2);
	printf("result:%d",m);
	return 0;
}
