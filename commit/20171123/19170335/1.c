    #include <stdio.h>
    long int fun(long int n)
    {
        do 
            n = n / 2;
        while (n % 2 == 0);
        return n;
    }
    int main()
    {
        long int n, i, sum = 0;
        scanf("%ld",&n);
        if (n % 2 == 0)
        {
            for (i = 1; i <= n; i = i + 2)
                sum = sum + i + fun(i + 1);
        }
        else 
        {
            for (i = 1; i <= n - 1; i= i+ 2)
                sum= sum + i + fun(i + 1);
            sum = sum + n;
        }
        printf("%ld",sum);
        return 0;
    }


