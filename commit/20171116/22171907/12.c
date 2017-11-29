 #include <stdio.h>

 int my_strcmp(const char *str1, const char *str2)
{
    if (*str1 != *str2)
        return -1;
    for ( ; *str1 == *str2; ++str1, ++str2)
        if (*str1 == '\0')
            return 0;
        return (*(unsigned char*)str1 < *(unsigned char*)str2? -1 : 1);

}

 int main()
{
    char str1[10], str2[10];
    scanf("%s", str1);
    scanf("%s", str2);
    int m ;
    m = my_strcmp(str1, str2);
    printf("%d\n", m);
    return 0;
}
