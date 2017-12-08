    #include <stdio.h>
    #include <string.h>
    int substr(const char* str, const char* substr);
    int main()
    {
        char a[20],b[20];
        printf("input a:");
        gets (a);
        printf("input b:");
        gets (b);
        printf ("%d", substr(a,b));
        return 0;
    }
    int substr(const char* str, const char* substr)
    {
        int i = 0,j = 0;
        while(1)
        {
            if (str[i] == substr[j])
            {
                i++;
                j++;
                if (j == strlen(substr))
                    return i - j;
            }
             if (str[i] != substr[j])
            {
                i++;
                j = 0;
                 if (i == strlen(str))
                    return -1;
             }
       }
    }
