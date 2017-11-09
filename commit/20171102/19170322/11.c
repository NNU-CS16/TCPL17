    #include <stdio.h>
    #include <string.h>
    void reverse(char* str)
    {
        for(int i = strlen(str) - 1; i >= 0; i--)
	printf("%c", str[i]);
        printf("\n");
    }
    int main()
    {
        char str[1000];
        printf("please input str:");
        gets(str);
        reverse(str);
        return 0;
    }
