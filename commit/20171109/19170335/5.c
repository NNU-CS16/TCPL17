    #include <stdio.h>
    int A(int n)
    {
        if ( n == 1)
            return 2;
        return A( n - 1) * 2 + 2;
    }
    int main()
    {
        int n;
        scanf("%d",&n);
        printf("%d",A(n));
        return 0;
    }
