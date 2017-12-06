#include <stdio.h>
#include <string.h>

int Substr(const char* str, const char* substr)
{
    int end, i, j;
    end = strlen(str) - strlen(substr);
    if (end > 0)
    {
        for (i = 0;i <= end;i++)
        {
            for (j = 0;substr[j];j++)
            {
                if (str[i + j] != substr[j])
                   break;
            }
            if (substr[j] == '\0')
                return i + 1;
        }
    }
    return -1;
}
int main()
{
    char str[20], substr[20];

    printf("Please input str :\n");
    fgets(str, 20, stdin);
    printf("Please input substr :\n");
    fgets(substr, 20, stdin);
    printf("%d\n", Substr(str, substr));

    return 0;
}
