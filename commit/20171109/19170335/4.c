    #include <stdio.h>
    int fib( int n, int k)
    {
        int i,count = 0;
        if ( n <= k)
            k = n;
        if ( n == 2 || n == 1)
            return n;
        else if ( n == 0)
            return 1;
        else
        {
            for(i = 1; i <= k; i++)
                count = count + fib( n - i, k);
            return count;
        }
    }
    int main()
    {
        int n, k;
        scanf("%d%d",&n,&k);
        printf("%d",fib( n, k));
        return 0;
     }


