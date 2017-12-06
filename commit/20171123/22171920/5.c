#include <stdio.h>
#include <string.h>
int Substr(const char *str, const char *substr)
{
    int len1 = strlen(str);
    int len2 = strlen(substr);
    if (len1 < len2)
        return -1;
    int i = 0;
    for ( ; i < len1; i++)
    {
        int j = 0;
        if (str[i] != substr[j])
            continue;
        while(j < len2 & i+j < len1)
        {
            j++;
            if (str[i+j] != substr[j])
                break;
        }
        if (j == len2)
            return i+1 ;
    }
    return -1;
}
int main()
{
    char str[40];
    char substr[50];
    printf("str:");
    scanf("%s",str);
    printf("substr:");
    scanf("%s",substr);
    printf("%d\n",Substr(str, substr));

    return 0;
}
