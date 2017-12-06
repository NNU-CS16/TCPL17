/*6.c_数字符串*/
#include <stdio.h>

int count_substr(const char* str, const char* substr);

int main()
{
	char str[10000], substr[10000];
    printf("请输入主串：");
    gets(str);
    printf("请输入子串：");
    gets(substr);
    printf("%d\n", count_substr(str, substr));
    return 0;
}


int count_substr(const char* str, const char* substr)
{
    int len1, len2, i, j, c, temp;
    len1 = strlen(str);
    len2 = strlen(substr);
    for (i = 0, c = 0; i < len1; ++i)
    {
		j = 0;
        temp = i;
        if (str[i] == substr[j])
        {
            for ( ; j < len2; ++i, ++j)
            {
                if (str[i] != substr[j])
                    break;
            }
        }
		if (j == len2)
		{
			++c;
			--i;
		}				//找到一个substr，c+1，并从结束的地方的下一位开始继续比较
		else
			i = temp;
    }
    return c;
}
