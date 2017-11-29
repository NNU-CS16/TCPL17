#include <stdio.h>
#include <string.h>
int my_strcmp(const char*str1, const char* src)
{
    int min, i;
    if (str1<str2) min=str1;
    else min=str2;
    for (i=0; i<min; i++)
    {
        if (str1[i]>str2[i]) return 1;
        if (str1[i]<str2[i]) return -1;
    }
    if (min == str1 && min != str2) return -1;
    if (min == str2 && min != str1) return 1;
    if (str1=str2) return 0;
}
int main()
{
    char str1[1000], str2[1000];
    scanf("%s%s", str1, str2);
    printf("%d\n", my_strcmp(str1,str2));
    return 0;
}
