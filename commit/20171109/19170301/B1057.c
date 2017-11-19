 #include <stdio.h>
 #include <ctype.h>
 int main()
 {
    char c;    
    int n = 0, a[2] = {0};
    while ((c = getchar ()) != '\n') 
    {
        if (isupper (c) || islower (c))
        n += tolower(c) - 'a' + 1;
    }
    while (n>0)
    {
        a[n % 2]++;
        n >>= 1;
    }

    printf ("%d %d\n", a[0], a[1]);
    return 0;
 }
