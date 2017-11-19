#include <stdio.h>
    int main()
    {
        char str[100000];
        int i, x, n = 0,count1 = 0, count0 = 0;
        for (i = 0; ; i++)
        {
            scanf("%c", &str[i]);
            if (str[i] == '\n')
                break;
            if ('a' <= str[i] && 'z' >= str[i])
                n = n + str[i] -'a' + 1;
            if ('A' <= str[i] && 'Z' >= str[i])
                n = n + str[i] -'A' + 1;
        }
        for (i = 0; ; i++)
        {
            x = n % 2;
            n = n / 2;
            if (n == 1)
                break;
            if (x == 1)
                count1++;
            if (x == 0)
                count0++;
        }
        printf ("%d %d\n", count0, count1);
        return 0;
    }          
