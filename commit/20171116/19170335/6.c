    #include <stdio.h>
    #include <string.h>
    void k_reverse(char* str, int k)
    {
        int i, m, j, temp;
        m = strlen(str) - strlen(str) % k;
        for (i = 0; i < m; i = i + k)
        {
            for (j = 0; j <= k / 2 - 1; j++)
            {
                temp = str[i + j];
                str[i + j] = str[ k - j - 1 + i];
                str[ k - j - 1 + i] = temp;
            }
        }
    }
    int main()
    {
        int k, i;
        char str[100];
        scanf("%s",str);
        char* p = str;
        scanf("%d",&k);
        k_reverse(p, k);
        for (i = 0; i < strlen(str); i++)
            printf("%c",str[i]);
        return 0;
    }
