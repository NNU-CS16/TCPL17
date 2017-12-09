 #include <stdio.h>
 int add (int n1, int n2);
 int main ()
 {
    int n, m;
    scanf ("%d %d", &n, &m);
    printf ("%d\n", add (n, m));
    return 0;
 }
 int add (int n1, int n2)
 {
    if (n2 == 0)
        return n1;
    int m1 = n1 ^ n2;
    int m2 = (n1 & n2) << 1;
    return add (m1, m2);
 }
