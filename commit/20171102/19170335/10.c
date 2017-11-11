    #include <stdio.h>
    #include <string.h>
    int fun ( char str[] )
    {
        int i, j, n;
        n = strlen(str);

    for ( i = 0, j = n - 1; i <= (n -1)/2; i++, j--)
        if (str[i] != str[j]) break;
    if ( i> j ) return 0;
    return -1;
    }
    
    int main ()
    {
    char a[20];
    gets(a);
    if ( fun(a) == 0 ) printf("yes");
    else printf("no");
    return 0;
    }

