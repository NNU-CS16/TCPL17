    #include <stdio.h>
    #include <string.h>
    void reverse(char* str)
    {   
        int i,count;

        count = strlen(str);
        for (i = count - 1; i >= 0;i--)
            printf("%c",str[i]);

    }

    int main()
    {
    char str[20];
    gets(str);
    reverse(str);
    printf("\n");
    return 0;
    }
