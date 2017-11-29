#include <stdio.h>

int my_strlen(const char* str)
{
	int i, cnt;
	for (i = 0, cnt = 0;; i++)
	{
		if (str[i] != '\0')
			cnt++;
		if (str[i] == '\0')
			break;
	}

	return cnt;
}

int main()
{
	char str[100];
	scanf("%s", str);
	printf("%d\n", my_strlen(str));

	return 0;
}
