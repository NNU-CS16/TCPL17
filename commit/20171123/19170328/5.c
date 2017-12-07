#include<stdio.h>
#include<string.h>
int Substr(const char* str, const char* substr);
int main()
{
    printf("Please input the str and the substr:\n");
    char str[100],substr[100];
    scanf("%s", str);
    scanf("%s", substr);
    printf("%d\n", Substr(str, substr));
    return 0;
}

int Substr(const char* str, const char* substr)
{
    int shut, i, j;
    shut = strlen(str) - strlen(substr);
    if (shut > 0)//考虑主字符串与子字符串的长度//
    {
        for (i = 0; i <= shut; i++)//检索的次数//
        {
            for (j = 0; substr[j]; j++)
            {
                if(str[i+j] != substr[j])
                    break;//找不到//
            }
            if(substr[j] == '\0')
                return i+1;
        }
    
    }
    return -1;
}
