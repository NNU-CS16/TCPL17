#include <stdio.h>
#include <string.h>
int count_substr(const char* str, const char* substr);
int main()
{
	int k;
	char str[30];
	char substr[10];
	printf("Please input str:");
	scanf("%s",str);
	printf("Please input substr:");
	scanf("%s",substr);
	k = count_substr(str, substr);
	printf("%d\n",k);
	return 0;
}

int count_substr(const char* str, const char* substr)
{
	int len1 = strlen(str);
	int len2 = strlen(substr);
	int i = 0;
	int j = 0;
	int p = 0, q = 0;
	while (i < len1)
	{	
		j = 0;
		p = 0;
		while (j < len2)
		{
			if (str[i] == substr[j])
				i++;
			    j++;
				p += 1;
			if (str[i] != substr[j])
				i++;
		}
		if (p = len2)
			q += 1;
	}	
	return q;
}
