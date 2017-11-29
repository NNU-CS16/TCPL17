    #include <stdio.h>
    int my_strlen(const char* str)
    {
        int i = 0;
        while(str[i] != '\0')
        {
            i++;
        }
        return i;
    }
    int main()
    {
        char a[101];
        gets(a);
        char *str;
        str = a;
        printf("%d\n", my_strlen(str));
        return 0;
    }

