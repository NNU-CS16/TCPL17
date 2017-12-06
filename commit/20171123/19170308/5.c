#include <stdio.h>
#include <string.h>
int Substr(const char* str, const char* substr);
int main()
{
	char str[30];
	char substr[10];
	int k;
	printf("Please input str:");
	scanf("%s",str);
	printf("Please input substr:");
	scanf("%s",substr);
	k = Substr(str, substr);
	printf("%d\n", k);
	return 0;
}

int Substr(const char* str, const char* substr)
{
	int len1 = strlen(str);
	int len2 = strlen(substr);
	int i = 0;
	int j = 0;
	int p,q;
	while (i < len1)
	{	
		j = 0;
		p = 0;
		while (j < len2)
		{
			if (str[i] == substr[j])
				p += 1;
				i++;
				j++;
			if (str[i] != substr[j])
				i++;
		}
		if (p == len2)	
			return (i-len2+1);
			break;
		if (p != len2)
			q += 1;
	}
	if (q != 0)
		return -1;
}		 
