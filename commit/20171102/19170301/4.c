 #include <stdio.h>
 int count1_in_bin (int n)
 {
    int num = 0;
    for (n; n != 0; num++)
        n = n & (n - 1);
        printf ("%d\n", num);
        return n;
 }
 int main ()
 {
    int n;
    scanf ("%d", &n);
    count1_in_bin (n);
    return 0;
 }
