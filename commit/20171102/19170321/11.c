#include <stdio.h>
    #include <string.h>
    void reverse (char* str);
    int main()
    {
        char a[20];
        char * p;
        gets (a);
        p = a;
        reverse (p);
        return 0;
     }
    void reverse(char* str)
    {
         int i;
    for(i = 0; i < strlen(str); i++)
    printf ("%c", str[strlen(str) - i - 1]);
    printf ("\n");
    }

