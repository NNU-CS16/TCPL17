#include<stdio.h>
#include<string.h>

int Substr(const char* str, const char* substr)
{
    int end, i, j;
    end = strlen(str) - strlen(substr);
    if (end > 0)
    {
        for (i = 0;i <= end;i++)
        {
            for (j = 0;substr[j];j++)
            {
                if (str[i + j] != substr[j])
                   break;
            }
            if (substr[j] == '\0')
                return i + 1;
        }
    }
    return -1;
}

void main()
{
    char str[100];
    char substr[100];
    printf("请输入字符串:");
    gets(str);
    printf("请输入要搜索的子字符串:");
    gets(substr);
    printf("%d\n", Substr(str, substr));
}
