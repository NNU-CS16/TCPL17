    #include <stdio.h>
    #include <string.h>
    int asubstr(const char* str, const char* substr)
    {
        int min, max, i, j, count = 0;
        min = strlen(substr);
        max = strlen(str);
        for (i = 0; i <= max - min + 1; i++)
        {
            for (j = 0; j <= min - 1; j++)
            {
                if ( substr[j] != str[i + j])
                    break;
                if (j == min - 1)
                {
                    count++;
                    i = i + min - 1;
                }
            }
        }
        return count;
    }
    int main()
    {
        char a[100], b[100];
        char* str;
        char* substr;
        str = a;
        substr = b;
        gets (str);
        gets (substr);
        printf("%d\n", asubstr(str, substr));
        return 0;
    }






