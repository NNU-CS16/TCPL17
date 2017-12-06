 #include <stdio.h>
 int jiyueshu (int n);
 int main ()
 {
    int n, i;
    long long int sum;
    scanf ("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
        sum += (jiyueshu (i));
    printf ("%lld\n", sum);    
    return 0;   
 }
 int jiyueshu (int n)
 {
    int i;
    for (i = n; i > 0; i--)
        if (n % i == 0 && i % 2 != 0)
            return i;
 }                
