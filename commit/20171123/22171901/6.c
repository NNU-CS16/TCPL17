#include <stdio.h>
#include <string.h>
int count_substr(const char* str, const char* substr);

int main()
{
    char a[100];
    char b[100];
    int res;
    printf ("输入主串：");
    gets (a);
    printf ("输入子串：");
    gets (b);
    res = count_substr (a , b);
    printf ("%d\n" , res);
    return 0;
}

int count_substr(const char* str, const char* substr)
{
    int len1 = strlen (str);
    int len2 = strlen (substr);
    int i , count = 0;
    for (i = 0; i <= len1 - len2; i++)
    {
        if (strncmp(str+i,substr,len2)==0)
        {
            count++;
            i = i + len2 - 1;
        }
    }
    return count;
}

