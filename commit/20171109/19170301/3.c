 #include <stdio.h>
 int Fib (long int n, int a, int b);
 int main ()
 {  
    long int n;
    printf ("N=");
    scanf ("%ld", &n);
    printf ("%d\n", Fib (n, 1 ,1));
    return 0;
 }
 int Fib (long int n, int a, int b)
 {
    if (n == 0)
        return 0;
    else if (n <= 1)
        return b % 100007;
    else
        return Fib (n - 1, b, a + b);
 }

