 #include <stdio.h>
 #include <string.h>
 int is_str_pal (const char* str)
 {
    int t = strlen (str);
    int i;
    for (i = 0; i <= t; i++, t--)
    {
        if (str[i] != str[t-1])
            return -1;
    }
        return 0;
 }
 int main ()
 {
    char str[100];
    scanf ("%s", str);
    if (is_str_pal (str) == 0)
        printf ("是回文串");
    else
        printf ("不是回文串");
    return 0;
 }

  

