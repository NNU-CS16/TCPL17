#include<stdio.h>
#include<string.h>

int sub(const char* str, const char* substr)
{
	int flag=-1;
	int count=-1;
	int i=strlen(str);
	int num=strlen(substr)-1;
	const char *end=NULL;
	end=str+i;
	while(str<end)
	{
		if(*str!=*substr)
		{
			count++;
			flag=-1;
			str++;
		}
		else
		{
			str++;
			substr++;
			count++;
			flag++;
			if(flag==num)
			{
				return count-num;
				break;
			}
		}
	}
	if(flag=-1)
		return -1;
}

int main( )
{
	const char* str="i dislike c";
	const char* substr="like";
	printf("%d\n",sub(str,substr));
	return 0;
}




