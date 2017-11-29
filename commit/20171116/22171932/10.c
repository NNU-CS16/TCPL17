#include <stdio.h>
int my_strlen(const char* str);
int main()
{
    int len;
    char str[50];
    printf("请输入字符串：\n");
    scanf("%s", str);
    len =  my_strlen(str);
    printf("%d\n", len);
    return 0;
}
int my_strlen(const char* str)
{
    int len = 0;
    while(str[len] != 0)
       len++;
    return len;
}
