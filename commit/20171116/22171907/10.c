 #include <stdio.h>

 int my_strlen(const char *str)
{
    int len = 0;

    while ((*str++) != '\0')
    {
        len++;
    }
    return len;
}

 int main()
{
    char str[100];
    scanf("%s", &str);
    int m;
    m = my_strlen(str);
    printf("%d\n", m);
    return 0;
}
