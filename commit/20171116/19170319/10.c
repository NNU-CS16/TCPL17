#include <stdio.h>
int my_strlen(const char* str)
{
    int i = 0,n = 0;
    while (1)
    {
        if (str[n] != '\0')
        {
            i++;
            n++;
        }
        else
            break;
    }
    return i;
}
int main()
{
    char ch[100];
    scanf("%s",ch);
    printf("%d",my_strlen(ch));
    return 0;
}
