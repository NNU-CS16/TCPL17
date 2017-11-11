#include <stdio.h>
#include <string.h>
#define MAX 50
int is_int_pal (const char* str);

int main()
{
    char str[MAX];
    scanf("%s", str);
    printf("%d\n",is_int_pal(str));
    return 0;
}

int is_int_pal (const char* str)
{
    int i, j;
    int flag = 1;
    for (i = 0,j = strlen(str)-1; j > i; i++, j--)
        {
             if (str[i] != str[j])
             {
                  flag = 0;
                  break;
              }
        }
        return flag;
}



