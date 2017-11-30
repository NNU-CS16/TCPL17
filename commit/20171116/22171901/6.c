#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k);

int main ()
{
    char *str;
    int k;
    printf ("输入字符串：");
    scanf ("%s" , str);
    printf ("输入k值：");
    scanf ("%d" , &k);
    k_reverse(str, k);
    return 0;
}

void k_reverse(char* str, int k)
{
    int len , i , j;
    len = strlen (str);
    for (i = 0; i < len; i = i + k)
    {
        if (len - i > k)
        {
            for (j = k - 1; j >= 0; j--)
                printf ("%c" , str[i + j]);
        }
        else
        {
            for (j = i; j < len; j++)
                printf ("%c" , str[j]);
        }
    }
    printf ("\n");
}


