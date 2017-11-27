 #include <stdio.h>
 int my_strlen (const char* str);
 int main ()
 {
    char str[100];
    scanf("%s", str);
    printf("%d\n", my_strlen(str));
    return 0;
 }
 int my_strlen (const char* str)
 {
    int i;
    for (i = 0; str[i] != '\0'; )
        i++;
    return i;
 }
