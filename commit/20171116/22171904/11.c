#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strcpy(char* dest ,const char * src)
{
	char*d=dest;
	char*s=src;
	int count =0;
	assert((dest!=NULL)&&(src!=NULL));
	if(src==dest)
		return src;
	count=strlen(src)+1;
	if(count<=1)
		return 0;
	if((dest<src)||dest>=(src+count))
	{
		while(count--)
		{
			*d++=*s++;
		}
	}
	else
	{
		d+=count;
		s+=count;
		while(count--)
		{
			*d--=*s--;
		}
	}
	return dest;
}

int main()
{
	char str1[100],str2[100];
	printf("请输入字符串：\n");
	scanf("%s",str1);
	my_strcpy(str2,str1);
	puts(str2);

	return 0;
}
