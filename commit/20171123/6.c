#include<stdio.h>

int count_substr(const char* str, const char* substr)
{
    int i, j;
    int count = 0;
    i = j = 0;
    while (str[i] != '\0')
    {
        while(str[i] != '\0' && substr[j] != '\0')
        {
            if (str[i] == substr[j])
            {
                i++;
                j++;
            }
            else
            {
                i = i - j + 1;
                j = 0;
            }
        }
        if (substr[j] == '\0')
        {
            count++;
            j = 0;
        }
    }
    return count;
}

int main(void)
{
    char str[100];
    char substr[100];
    printf("请输入一个字符串：");
    gets( str);
    printf("请输入相应子串：");
    gets(substr);
    printf("%d\n", count_substr(str, substr));
}
