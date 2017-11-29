#include <stdio.h>
int my_strlen(const char* str)
{
    int i = 0, j;
    for (j = 0; str[j] != '\0'; j++)
    i++;
    return i;
}
int main()
{
    char str[1000];
    scanf("%[^\n]", str);
    printf("%d\n", my_strlen(str));
    return 0;
}
