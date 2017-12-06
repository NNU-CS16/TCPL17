 #include <stdio.h>
 #include <string.h>
 int count_substr(const char *str, const char *substr)
{
    int count = 0, i;
    int a = strlen(str), b = strlen(substr);
    while (strlen(str) >= b)
    {
        if (strncmp( str, substr, b) == 0 )
        {
            count++;
            str = str + b;
        }
        else
            str = str + 1;
    }
    return count;
}

 int main()
{
    char *str1, *str2;
    scanf("%s", str1);
    scanf("%s", str2);

    int m = count_substr(str1, str2);

    printf("%d\n", m);
    return 0;
}

