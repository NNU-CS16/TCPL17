#include <stdio.h>
#include <string.h>
int my_strcmp (const char* str1, const char* str2)
{
    int i, len1, len2;
    len1 = strlen (str1);
    len2 = strlen (str2);
    if (len1 > len2)
        return 1;
    else if (len1 < len2)
            return -1;
        else for (i = 0; i < len1; i++)
            {
                if (str1[i] < str2[i])
                    return -1;
                else if (str1[i] > str2[i])
                        return 1;
            }
    return 0;
}
int main ()
{
    char str1[20], str2[20];
    scanf ("%s", str1);
    scanf ("%s", str2);
    printf ("%d\n", my_strcmp (str1, str2));
    return 0;
}
