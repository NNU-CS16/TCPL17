#include <stdio.h>
#include <math.h>
int sushu (int n, int i);
int main ()
{    
	int N, M, i, n, l, c;
    int num[10000];
    i = 1, n = 2, l = 1, c =0;
    scanf ("%d %d", &M, &N);
    while (c < N)
    {
        
        if (sushu (n, sqrt(n)) == 0)
        {
            num[i] = n;
            i++;
            c++;
        }
        n++;
    }
    for (n = M; n <= N; n++)
    {
        printf ("%d", num[n]);
        if (l != N - M + 1 && l % 10 != 0)
            printf (" ");
        if (l % 10 == 0 && n != N)
            printf ("\n");
        l++;
    }       
    printf ("\n");
    return 0;
 }
 int sushu (int n, int i)
 {
    if (i == 0 || i == 1)
        return 0;
    if (n % i == 0)
        return 1;
    else
        return sushu (n, i - 1);
 }       
    
    
