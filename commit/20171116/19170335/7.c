    #include <stdio.h>
    #include <string.h>
    int main()
    {
        char a[1000], b[1000];
        int m[1000], n[1000], sum[1001];
        int i, la, lb;
        scanf("%s%s", a, b);
        la = strlen(a);
        lb = strlen(b);
        for (i = 0; i < la; i++)
            m[i] = a[la - i - 1] - 48;
        for (i = 0; i < lb; i++)
            n[i] = b[lb - i - 1] - 48;
        int max = (la > lb) ? la : lb;
        for (i = 0; i <= max; i++)
        {
            sum[i] = m[i] + n[i];
            if (sum[i] >= 10)
            {
                sum[i] = sum[i] - 10;
                m[i + 1] = m[i + 1] + 1;
            }
        }
        for (i = (sum[max] != 0) ? max : max - 1; i >= 0; i--)
        printf("%d",sum[i]);
        return 0;
    }



