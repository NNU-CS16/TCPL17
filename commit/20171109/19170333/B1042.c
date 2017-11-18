#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main ()
{
    char c;
    int i, j, max = 0;
    int arr[26] = { 0 };
    while ((c = getchar ()) != '\n')
    {
        c = tolower(c);
        if (c >= 'a' && c <= 'z')
            arr[c - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        if ( arr[i] > max)
        {
            max = arr[i];
            j = i;
        }
    }
    printf("%c %d\n", tolower( j + 'a') , max);
    return 0;
}

