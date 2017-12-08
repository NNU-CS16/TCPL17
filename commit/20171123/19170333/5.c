#include <stdio.h>
#include <string.h>
int substr (const char* str, const char* subst)
{
    char* p;
    int len, count = 0, m = 0;
    len = strlen (subst);
    while ( *str )
    {
        count++;
        while ( *str == *subst && *subst != '\0')
        {
            str++; subst++; m++;
            if (m = len)
                return count - 1;
        }
        str++;
    }
    return -1;
}
int main ()
{
    char str[20], subst[20];
    gets ( str );
    gets ( subst );
    printf ("%d\n", substr (str, subst));
    return 0;
}
