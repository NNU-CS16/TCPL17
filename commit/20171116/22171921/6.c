#include<stdio.h>
#include<string.h>

void k_reverse(char* str, int k)
{
    int l, i, j, n = k;
    char t;
    l = strlen(str);
    for (j = 0;(l - n) >= 0;j += k, n += k)
        for (i = 0;i < (k / 2);i++)
        {
            t = str[i + j];
            str[i + j] = str[n - i - 1];
            str[n - i - 1] = t;
        }
}

int main()
{
    char str[200];
    int k;
    printf("字符串为：\n");
    scanf("%s", str);
    printf("k = \n");
    scanf("%d", &k);
    k_reverse(str, k);
    printf("%s\n", str);
    return 0;
}
