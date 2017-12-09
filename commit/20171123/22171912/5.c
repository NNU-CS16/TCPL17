/*5.c_找字符串*/
#include <stdio.h>
#include <string.h>

int Substr(const char* str, const char* substr);

int main()
{
	char str[10000], substr[10000];
	printf("请输入主串：");
	gets(str);
	printf("请输入子串：");
	gets(substr);
	printf("%d\n", Substr(str, substr));
	return 0;
}


int Substr(const char* str, const char* substr)
{
	int len1, len2, i, j, temp;
	len1 = strlen(str);
	len2 = strlen(substr);
	for (i = 0, j = 0; i < len1; ++i)
	{
		temp = i;
		if (str[i] == substr[j])
		{
			for (j = 1; j < len2; ++i, ++j)
			{
				if (str[i] != substr[j])
					break;
			}							//比较从i位开始后几位的str与substr是否完全相等
			if (j == len2)
            	return temp;		//得出完全相等，返回i
		}
		i = temp;						//若不完全相等，回到i位下一位继续比较
	}
	return -1;
}
