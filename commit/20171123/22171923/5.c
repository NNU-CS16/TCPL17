#include <stdio.h>
#include <string.h>
int substr(const char* str, const char* substr)
{
    int len1 = strlen(str);
    int len2 = strlen(substr);
    for (int i = 0; i <= len1-len2; i++)
        if (strncmp(str+i, substr, len2) == 0)
            return i;
        return -1;
}
int main()
{
    char *str[20];
    char *stu[10];
    scanf("%s", &str);
    scanf("%s", &stu);
    int p;
    p = substr(str, substr);
    if (p == -1)
    printf("不含子字符串");
    else printf("%d\n", p);
    return 0;
}
    
