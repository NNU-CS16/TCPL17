#include <stdio.h>  
int BinomialCoefficient(int n, int k)
{  
    if (n > k / 2) 
        n = k - n;  
        if (n == 0 || k == 1) 
        return 1;  
    else 
        return BinomialCoefficient(n, k - 1) + BinomialCoefficient(n - 1, k - 1);  
}  
int main() 
{  
    int k, n;  
    scanf("%d%d", &n, &k);  
    printf("%d\n", BinomialCoefficient(n, k));  
    return 0;  
}  
