   #include <stdio.h>
    int f( int n);
    int main ()
    {
        int i, N, result = 0;
        printf ("input N:");
        scanf ("%d", &N);
        for (i = 1; i <= N; i++)
            result = result + f(i);
        printf ("%d\n", result);
        return 0;
    }
    int f( int n)
    {
        int i;
        if (n % 2 == 1)
            return n;
        else
            for ( i = 1; i <= n; i++)
                if (n % i  == 0 && (n / i) % 2 == 1 )
                    return n / i;
    }
