 #include <stdio.h>
 int my_strcmp (const char* str1, const char* str2);
 int main ()
 {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    printf("%d\n", my_strcmp(str1, str2));
    return 0;
 }
 int my_strcmp (const char* str1, const char* str2)
 {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] > str2[i])
            return 1;
        if (str1[i] < str2[i])
            return -1;
        if (str1[i] == str2[i])
            i++;
    }
    return 0;
 }
