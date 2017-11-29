#include <stdio.h>
int my_strlen (const char* str)
{
    static int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}
int main ()
{
    char str[100];
    static int count = 0;
    
    scanf ("%s", str);
    count = my_strlen (str);
    printf ("%d\n", count);
    return 0;

}
