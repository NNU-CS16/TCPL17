#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);
int main()
{
    char j [ 32 ];
    int m;
    scanf("%s",j);
    m = is_str_pal(j);
    printf("%d\n", m);
    return 0;
}
int is_str_pal(const char* str)
{
    int i = strlen(str);
    int a = 1, c = 0;
    i--;
    for (a = 1;a <= (i + 1) / 2;a++)
    {
        if (str [ c ] != str [ i ])
            return -1;
        if(a >= i / 2 && str [ c ] == str [ i ])
            return 0;
        else
        {
            i--;
            c++;
        }
    }
}
