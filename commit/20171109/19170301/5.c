 #include <stdio.h>
 int fib (int n);
 int main ()
 {
    int n;
    scanf ("%d", &n);
    printf ("%d\n", 2 * fib (n));
    return 0;
 }
 int fib (int n)
 {
    if (n == 1)
        return 1;
    return fib (n - 1) * 2 + 1;
 }
