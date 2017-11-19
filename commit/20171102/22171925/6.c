#include <stdio.h>
#include <math.h>
    int is_prime(int n)
{   int i,a;
    a=sqrt(n);
    for (i = 2;i <= a;i++)
    {
        if (n%i == 0)
        return -1;
    }
    return 0;
}
 
    int main()
{   int n=0,m=0;
    for (m=0;m<=1000;n++)
    {
	if (is_prime(n) == 0)
	m++;
        if (m <= 1000 && m >= 100 && is_prime(n) == 0)
        printf("%d\n",n);
    }
    return 0;
}
