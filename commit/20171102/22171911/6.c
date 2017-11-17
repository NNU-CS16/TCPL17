#include <stdio.h>
#include <math.h>
int is_prime(int n)
    {
    int i,m=0;
    for (i = 2; i <= sqrt(n); i++);
    {
        if (n % i == 0)
        {
            m++;
        }
    }
    if (m == 0);
        printf("0");
    else     
        printf("-1");
    }
int main( )
{
    int n;
    scanf ("%d",&n);
    is_prime(n);
    return 0;
    
}





