#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
	int i;
    for (i = 2;i <= sqrt(n);++i)
    {
    	if ( n % i == 0)
        { 
        	return -1; 
            break;
        } 
    }
    if (n % (i - 1) != 0)
        return 0;
}
int main()
{
	int n = 2;
    int flag,a;
    for ( n = 2,a = 0;a <= 1000;++n)
    { 
    	flag = is_prime(n);
        if (flag == 0)
        {
        	a = a + 1;
            if (a >= 100)
            	printf("%d ",n);
        } 
    }
    return 0;
}
