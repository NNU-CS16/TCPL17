#include <stdio.h>
int BinomialCoefficient(int n, int k);
int main()
{
    int n, k, c;
    printf("请输入n、k:\n");
    scanf("%d%d", &n, &k);
    c = BinomialCoefficient(n, k);
    printf("二项式系数𝐶 𝑛 𝑘 为：%d\n", c);
    return 0;
}
int BinomialCoefficient(int n, int k)
{   
    int c;
    while(k > n/2)
         k = n - k;  
       if(k == 1)
          c = n;
       else if (k == 0)
          c = 0;
           else
            c = BinomialCoefficient(n-1, k-1) + BinomialCoefficient(n-1, k);
    return c;
}
