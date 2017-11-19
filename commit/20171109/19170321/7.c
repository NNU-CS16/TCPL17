#include <stdio.h>
    int BinomialCoefficient(int n, int k);
    int main()
    {
        int n, k;
        printf("input n,k:\n");
        scanf("%d%d", &n, &k);
        printf("%d\n",  BinomialCoefficient(n, k));
        return 0;
    }
    int BinomialCoefficient(int n, int k)
    {
        if (k == 0 || n == 1 || k == n)
            return 1;
        else
            return  BinomialCoefficient(n -1, k -1) +  BinomialCoefficient(n -1, k);
    }

