#include <stdio.h>
#include <string.h>

int is_str_pal(char* str);
int main()
{
    char* str = NULL;
    char a[60];
    scanf("%s", a);
    str = a;
    if (is_str_pal(str))
        printf("0\n");
    else
        printf("-1\n");
    return 0;
}

int is_str_pal(char* str)
{
    int i, j, flag = 1;
    for (i = 0, j = strlen(str) - 1; i < j;i++,j--)
    {
        if (*(str + i) != *(str + j))
        { 
            flag = 0;
            break;
        }
    }
    return flag;
}
