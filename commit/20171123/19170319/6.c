#include <stdio.h>
#include <string.h>
int count_substr(const char *str,const char *substr)
{
    int sum = 0;
    int i = 0;
    for ( ;i <= strlen(str) - strlen(substr);i++)
        if (strncmp(str + i,substr,strlen(substr)) == 0)
        {
            sum++;
            i += strlen(substr) - 1;
        }
    return sum;
}
int main()
{
    char str[100];
    char substr[50];
    scanf("%s",str);
    scanf("%s",substr);
    printf("%d",count_substr(str,substr));
    return 0;
}
