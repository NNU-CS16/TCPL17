    #include <stdio.h>
    int add(int n1, int n2)
    {
        int a,b;
        do
        {
            a = n1 ^ n2;
            b = (n1 & n2) << 1;
            n1 = a;
            n2 = b;
        
        } while (n2 != 0);
        return n1;
    }
    int buma(int a)
    {
        return add((~a), 1);
    }
    int main()
    {
        int n1, n2;
        if (n1 < 0)
            n1 = buma(n1);
        if (n2 < 0)
            n2 = buma(n2);
        scanf("%d%d", &n1, &n2);
        printf("%d\n", add(n1, n2));
        return 0;
    }
