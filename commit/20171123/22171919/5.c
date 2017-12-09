#include <stdio.h>
#include <string.h>
int Substr(const char* str, const char* substr)
{
	int len1 = strlen(str);
	int len2 = strlen(substr);

	if(len1 < len2)
		return -1;
	else
	{
		int i;
		for(i = 0;i <= (len1-len2);i++)
		{
			if(str[i] == substr[0])
				break;
		}
		if(i > (len1-len2))
			return -1;
		else
		{
			int n = i+1,j = 1;
			while(j <= (len2 -1))
			{
				if(str[i+1] != substr[j])
				{
					n = -1; break;
				}
				else
					j++;i++;
			}
			return n;
		}
	}
}

int main()
{
	char str[100],substr[100];
	printf("请输入主串:");
	scanf("%s",str);
	printf("请输入子串:");
	scanf("%s",substr);
	int m = Substr(str,substr);
	printf("%d\n",m);
	return 0;
}
