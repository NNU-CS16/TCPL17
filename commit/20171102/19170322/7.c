    #include <stdio.h>
    int GCD_iterative(int m, int n)
    {
        int i, j;
        if(m < n)
        {
            i = m;
            m = n;
            n = i;
        }
        while(n != 0)
        {
            j = m;
            m = n;
            n = j % n;
        }
        return m;
    }
    int GCD_recursive(int m, int n)
    {
        int i, j;
        if(m < n)
        {
            i = m;
            m = n;
            n = i;
        }
        j = m;
        m = n;
        n = j % n;
        if(n == 0)
	    return m;
        else
	    return GCD_recursive(m, n);
    }
    int main()
    {
        int m, n;
        printf("please input m, n:");
        scanf("%d %d", &m, &n);
        printf("%d\n", GCD_iterative(m, n));
        printf("%d\n", GCD_recursive(m, n));
        return 0;
    }
