#include <stdio.h>
#include <string.h>
int substr(const char* str, const char* substr)
{
	int a = strlen(str);
	int b = strlen(substr);
	int i = 0;
	int j = 0;
	int k = -1;
	while(i < a)
	{
		i++;
		if(substr[j] != str[i])
			continue;
		k = i + 1;
		for(j = 0; j < b; j++,i++)
		{
			if(substr[j] != str[i])
				k = -1;
		}
		if(k >= 0)
			return k;
	}
	return -1;
}


int main()
{
	char str[100],sub[100];
	scanf("%s%s",str,sub);
	printf("%d\n",substr(str,sub));
	return 0;
}

