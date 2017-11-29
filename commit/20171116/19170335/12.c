    #include <stdio.h>
    int my_strcmp(const char* str1, const char* str2)
    {
        int i, m, n, min;
        for (i = 0; str1[i] != '\0'; i++)
            m = i;
        for (i = 0; str2[i] != '\0'; i++)
            n = i;
        min = (m < n) ? m + 1 : n + 1;
        for (i = 0; i <= min; i++)
        {
            if (str1[i] < str2[i])
                return -1;
            else if (str1[i] > str2[i])
                return 1;
            else
                continue;
        }
        return 0;
    }
    int main()
    {
        char a[100], b[100];
        gets(a);
        gets(b);
        char* str1;
        char* str2;
        str1 = a;
        str2 = b;
        printf("%d\n", my_strcmp(str1, str2));
        return 0;
    }
        
