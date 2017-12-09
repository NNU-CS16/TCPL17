#include <stdio.h>
#include <string.h>

int count_substr(const char* str, const char* substr)
{
    int i,j,k;
    int num = 0;
    for (i = 0; str[i] != '\0'; i++)
        for (j=i,k=0; substr[k] == str[j]; k++,j++)
            if (substr[k+1] == '\0')
            {
                num++;
                break;
            }
     return num;
}

int main ()
{
    char str[100],substr[100];
    scanf("%s%s",str,substr);
    printf("%d\n",count_substr(str,substr));
    return 0;
}

