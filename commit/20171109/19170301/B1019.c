 #include <stdio.h>
 #include <string.h>
 int max (int a[]);
 int min (int a[]);
 void fj (int a[], int n);
 int heidong (int a[], int n);
 int main ()
 {
    int n;
    scanf ("%d", &n);
    int a[4];
    heidong (a, n);
    return 0;
 }
 int heidong (int a[], int n)
 {
    int s, j;
    fj (a, n);
    s = max (a);
    j = min (a);
    if (s - j != 6174 && s != j)
    {
        printf ("%04d - %04d = %04d\n", s, j, s - j);
        heidong (a, s - j);
    }
    else 
        printf ("%04d - %04d = %04d\n", s, j, s - j);
    return 0;
 } 
 void fj (int a[], int n)
 {
    a[0] = (n / 1000) % 10;
    a[1] = (n / 100) % 10;
    a[2] = (n / 10) % 10;
    a[3] = n % 10;
 }
 int max (int a[])
 {
    int t, i, j;
    for (j = 0; j < 3; j++)
        for(i = 0; i < 3 - j; i++)
        {
            if (a[i] < a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
 }
 int min (int a[])
 {
    int t, i, j;
    for (j = 0; j < 3; j++)
        for(i = 0; i < 3 - j; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    return a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
 }  

