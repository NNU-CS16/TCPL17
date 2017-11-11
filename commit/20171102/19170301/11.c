 #include <stdio.h>
 #include <string.h>
 void reverse (char* str)
 {
    int i = 0, t = strlen (str);
    for (i = t - 1; i >= 0; i--)
        printf ("%c", str[i]);
 }
 int main ()
 {
    char str[100];
    scanf ("%s", str);
    reverse (str);
    printf ("\n");
    return 0;
 } 
