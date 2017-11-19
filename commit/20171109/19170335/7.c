    #include <stdio.h>
    int BinomialCoefficient(int n, int k)
    {
        int a;
        if (k == 1)
            return n;
        else
        {
            a = BinomialCoefficient(n - 1, k - 1) + BinomialCoefficient(n -1, k);
            return a;
        }
    }
    int main()
    {
        int n, k;
        scanf("%d%d",&n,&k);
        printf("%d\n", BinomialCoefficient(n, k));
        return 0;
    }
