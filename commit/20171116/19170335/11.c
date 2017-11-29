    #include <stdio.h>
    void my_strcpy(char* dest, const char* str)
    {
        int i;
        for (i = 0; str[i] != '\0'; i++)
        dest[i] = str[i];
        dest[i] = str[i];
    }
    int main()
    {
        char a[101], b[101];
        char* dest;
        char* str;
        dest = b;
        str = a;
        gets(a);
        my_strcpy(dest, str);
        puts(b);
        return 0;
    }

