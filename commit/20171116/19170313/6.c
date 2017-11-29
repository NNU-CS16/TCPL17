#include <stdio.h>
#include <string.h>
void k_reverse(char *str, int k);
int main()
{
    char *str;
    int k;
    char a [ 100 ] ;
    str = a;
    scanf("%s", a);
    scanf("%d", &k);
    k_reverse(str, k);
    return 0;
}
void k_reverse(char *str, int k)
{
    int i, j = 0, m = k, n, w;
    i = strlen(str);
    i--;
    for (j = 0; ; )
    {
        for (n = k - 1;n >= j;n--)
        {
            printf("%c", str [ n ] );
        }
        j = j + m;
        k = k + m;
        if (k > i)
        {
            for (w = j;w <= i;w++)
            {
                printf("%c", str [ w ] );
            }
            break;
        }
    }
    printf("\n");
    return;
}
