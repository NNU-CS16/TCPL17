#include <stdio.h>
#include <string.h>

void k_reverse(char* str, int k);

int main()
{
	int i, j, c, k;
	char str[1000], temp;
    printf("请输入字符串：");
    gets(str);
	printf("请输入k：");
	scanf("%d", &k);
	k_reverse(str, k);
	return 0;
}

void k_reverse(char* str, int k)
{
	int i, j, c;
	char temp;
	if (str == NULL)
		printf("NULL\n");
	else
	{
	for (i = 0, c = 1; c <= strlen(str) / k; ++c)
	{
		j = i + k - 1;
		for (; i < j; ++i, --j)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
		i = c * k;
	}
	printf("%s\n", str);
	}
}
