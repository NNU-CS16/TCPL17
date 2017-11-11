#include <stdio.h>
int LCM(int m, int n)
{
    int i, j;
    for (i=n; i>=1; i--)
        if (m % i == 0 && n%i == 0)
        break;
     j=m*n/i;
     return j;
}
 
int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    printf("%d\n", LCM(m,n));
   return 0;
}
