#include <stdio.h>
#include <string.h>

void k_reverse(char* str, int k)
{
    int x = 0;
    int y = k;
    int i, j, temp;
    while (y <= strlen(str))
    {
        for (i = x,j = y-1; i<y,j>i; i++, j--)
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
        x += k;
        y += k;
     }
}

int main ()
{
    char str[10];
    fgets(str,11,stdin);
    k_reverse(str,3);
    printf("%s\n",str);
    return 0;
}
