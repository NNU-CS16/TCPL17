 #include <stdio.h>
 
 int BinomialCoefficient(int n, int k)
 {
    if (k == 0 || n == k)
      return 1;
    else 
      return BinomialCoefficient(n - 1, k) + BinomialCoefficient(n - 1, k - 1);
 }
 
 int main()
 {
    int n, k;
    scanf ("%d %d", &n, &k);
    printf ("%d\n", BinomialCoefficient(n, k));
    return 0;
 }

