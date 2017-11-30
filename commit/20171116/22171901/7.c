#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001] , b[1001];
    int c[2000];
    printf ("输入两个数：");
    scanf ("%s%s" , a , b);
    int len_a = strlen (a);
    int len_b = strlen (b);
    int i , j, k = 0, jw = 0 , r;

    for (i = len_a - 1 , j = len_b - 1; i >= 0 && j >= 0; i-- , j--)
    {
        r = (a[i] - '0')+ (b[i] - '0') + jw;
        jw = r / 10;
        k++;
        c[k] = r % 10; //存储余数
    }

    while (i >= 0) //b中的数加完
    {
        r = (a[i] - '0') + jw;
        jw = r / 10;
        k++;
        c[k] = r % 10;
        i--;
    }

    while (j >= 0) //a中数加完
    {
        r = (b[i] - '0') + jw;
        jw = r / 10;
        k++;
        c[k] = r % 10;
        j--;
    }

    if (jw)
        c[k++] = jw;

    for (i = k - 1; i >= 0; i--)
        printf ("%d" , c[i]);

    return 0;

}


