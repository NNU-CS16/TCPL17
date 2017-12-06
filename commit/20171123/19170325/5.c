#include <stdio.h>
#include <string.h>

int Substr(const char* str, const char* substr);

int main(void)
{
    char str[20], substr[20];

    printf("Please input str :\n");
    fgets(str, 20, stdin);
    printf("Please input substr :\n");
    fgets(substr, 20, stdin);
    printf("%d\n", Substr(str, substr));

    return 0;
}

int Substr(const char* str, const char* substr)
{
    int i, j, temp = -1;

    for (i = 0; i < strlen(str) - 1; i++)
    {
      for (j = 0; j < strlen(substr) - 1, i + j < strlen(str) - 1; j++)
        if (str[i + j] != substr[j])
           break;
        else
           temp = i;
      if (j >= strlen(substr) - 1 || i + j >= strlen(str) - 1)
           return i;
    }
    if (temp = -1)
       return temp;
}
