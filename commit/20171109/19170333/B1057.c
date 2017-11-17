#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int convert1 (int  n)
{
    int j=0;
    while (n)
    {
        if ((n & 1) == 1)
            j++;
        n = n >> 1;
    }
    return j;
}
int convert2 (int n)
{
    int i = 0;
    while (n)
    {
        if ( (n & 1) == 0)
            i++;
        n = n >> 1;
    }
    return i;
}
    
int main ()
{
    int sum = 0;
    int i, j;
    char c;
    while ((c = getchar()) != '\n')
    {
        c = tolower (c);
        if (c >= 'a'&& c<= 'z')
            sum += (c + 1- 'a');
    }
    j = convert1 (sum);
    i = convert2 (sum);
    printf ("%-3d%-3d\n", i, j);
    return 0;
}
