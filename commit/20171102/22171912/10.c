/*10.c回文字符*/
#include <stdio.h>
#include <string.h>

int is_str_pal(const char* str[])
{
    int i, j, len;
    char a, b;
    gets(str);
    len = strlen(str);
    for (i = 0, j = len - 1; i <= j; i++, j--)
    {
        a = str[i];
        b = str[j];
        if (a != b)
            break;
    }
    printf("%d\n", len);
    printf("%d\n", i);
    if (i > j)
        return 0;
    else
        return -1;
}/*这个程序是错的，永远返回-1；第18、19行验证，len是对的，i永远是0；不知道怎么改。*/

int main()
{
    int i, result, len;
    char str[100], a, b;
    printf("请输入一串字符串：\n");
    result = is_str_pal(str);
    printf("%d\n", result);
    return 0;
}

