#include <stdio.h>
#include <string.h>
int main ()
{
    int i, j;
    char *str[] = {"nanjing", "wuxi", "suzhou", "changzhou", "shuzhou"};
    char *ptemp = NULL;
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp (str[i], str[j]) > 0)
            {
                ptemp = str[i];
                str[i] = str[j];
                str[j] = ptemp;
            }
        }
    for (i = 0; i < 5; i++)
        puts (str[i]);
    return 0;
}

