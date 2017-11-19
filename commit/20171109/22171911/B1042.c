#include <stdio.h>
#include <string.h>
int main( )
{
    char a[1000];
    int i, m, max = 0, ASC[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, len;
    gets(a);
    len = strlen(a);
    for (i = 0; i < len; i++)
    {
	if (a[i] >= 'a' && a[i] <= 'z')
	    a[i] = a[i] - 'a' + 'A';
        if (a[i] >= 'A' && a[i] <= 'Z')
	    ASC[a[i] - 'A']++;
    }
    for (i = 0; i < 26; i++)
    {
	if (ASC[i] > max)
        {
	    max = ASC[i];
	    m = i;
	}
    }
    printf ("%c %d", m + 'a', max);
    return 0;
}
