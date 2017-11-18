 #include <stdio.h>
 #include <ctype.h>
 int main()
 {
    char c;
    int a[26] = {0}, max = 25, i;
    while ((c = getchar ()) != '\n')
    {
        if (isupper (c) || islower (c))
        a[tolower (c) - 'a']++;
    }
    for (i = 25; i >= 0; i--) 
    {
        if (a[i] >= a[max])
        max = i;
    }         
    printf ("%c %d\n", max + 'a', a[max]);
    return 0;
 }
