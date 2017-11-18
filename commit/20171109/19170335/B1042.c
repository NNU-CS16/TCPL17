    #include <stdio.h>
    int main()
    {
        int i, j;
        int max = 0;
        int num[26] = {0};
        char one;
        while(scanf("%c",&one) && ('\n' != one))
        {
            if ((one >= 65) && (one <= 90))
                num[one - 65]++;
            else if ((one >= 97) && (one <= 122))
                num[one - 97]++;
        }
        for (i = 0; i < 26; i++)
        {
            if (max < num[i])
            {
                max = num[i];
                j = i;
            }
        }
        printf("%c %d\n",'a' + j, max);
        return 0;
    }


