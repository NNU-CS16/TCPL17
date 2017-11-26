 #include <stdio.h>
 #include <string.h>
 int main ()
 {
    char A[1000], B[1000];
    int a[10001] = {0}, b[10001] = {0}, m, n, c, k, i;
    printf ("A=");
    scanf ("%s", A);
    printf ("B=");
    scanf ("%s", B);
    m = strlen(A);
    n = strlen(B);
    if (m < n)
        k = n; 
    else    
        k = m; 
    c = k; 
    for (i = 0; i < m; k--, i++) 
        a[k] = A[m-1-i]-'0';
    for (k = c, i = 0; i < n; k--,i++)   
        b[k] = B[n-1-i]-'0';
    for (i = c; i >= 0; i--)
    {
        a[i] += b[i];
        if (a[i] >= 10) 
        {
            a[i] -= 10;
            a[i-1]++;
        }
    }
    printf("A+B=");
    if (a[0] != 0) 
    {
        for (i = 0; i <= c; i++)
        printf ("%d", a[i]);
    }
    else  
    {
        for (i = 1; i <= c; i++)
        printf ("%d", a[i]);
    }
    printf ("\n");
    return 0;
 }
