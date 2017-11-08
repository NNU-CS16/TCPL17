 #include <stdio.h>
 int LCM (int m, int n)
 {
    int t = 1;
    for ( ; t % m != 0 || t % n != 0; t++)
    {
    }
    return t;
 }
 int main ()
 { 
    int m, n;
    scanf("%d %d", &m, &n);
    LCM (m, n);
    printf("%d\n", LCM (m, n));
    return 0;
 }
