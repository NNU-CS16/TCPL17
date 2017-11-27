#include <stdio.h>
int my_strlen(const char* str);
int main()
{
    char str[50];
    scanf("%s", str);
    my_strlen(str);
    return 0;
}
int my_strlen(const char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i ++;
    }
    printf("%d",i);

}
