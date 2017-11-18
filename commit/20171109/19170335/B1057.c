    #include <stdio.h>
    int main()
    {
        char a[100000];
        gets(a);
        int i,sum = 0;
        for (i = 0; a[i] != '\0'; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
                sum = sum + a[i] - 'A' + 1;
            if (a[i] >= 'a' && a[i] <= 'z')
                sum = sum +a[i] - 'a' + 1;
        }
        int x = 0, y = 0;
        while(sum != 0)
        {
            if (sum % 2 == 0)
                x++;
            else
                y++;
            sum = sum / 2;
        }
        printf("%d %d\n",x, y);
        return 0;
    }

