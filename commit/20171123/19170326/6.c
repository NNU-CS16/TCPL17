#include<stdio.h>
#include<string.h>

int count_substr(const char* str, const char* substr)
{
	const char* end=NULL;
	const char* shift=NULL;
	int num=strlen(substr);
	int count=0;
	int flag=0;
	end=str+strlen(str);
	shift=substr;

	while(str<end)
	{
		if(*shift!=*str)
		{
			flag=0;
			str++;
		}
		else
		{
			flag++;
			if(flag==num)
			{
				count++;	
				flag=0;
				shift=substr-1;
			}
			str++;
			shift++;
		}
	}
	return count;
}

int main( )
{
	const char* str="sososos";
	const char* substr="s";
	printf("%d\n",count_substr(str,substr));
	return 0;
}

