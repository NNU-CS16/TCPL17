 #include <stdio.h>
 void my_strcpy (char* dest, const char* src);
 int main ()
 {
    char dest[100], src[100];
    printf ("src=");
    scanf ("%s", src);
    my_strcpy (dest, src);
    printf ("dest=%s\n", dest);
    return 0;
 }
 void my_strcpy (char* dest, const char* src)
 {    
    while ((dest != NULL) && (src != NULL))
        break;
    while ((*dest = *src) != '\0')
    {
        dest++;
        src++;
    }                                           
 }
