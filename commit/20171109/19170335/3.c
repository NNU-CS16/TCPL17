    #include <stdio.h>
    int fib(int n)
    {
        if ( n <= 2)
            return n;
        else
            return fib( n - 1) + fib( n - 2);
    }
    int main()
    {
        int n;
        scanf("%d",&n);
        printf("%d", fib(n) % 100007);
        return 0;
    }

            
