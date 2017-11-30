#include <stdio.h>
int my_strlen(const char *str);
int main()
{
    char str[100];
    printf("Please input: ");
    scanf("%s", str);
    
    printf("%d\n", my_strlen(str));

    return 0;
}
int my_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
	i++;
        return i;
}
