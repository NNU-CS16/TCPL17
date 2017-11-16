#include <stdio.h>
#include <math.h>
int is_int_pal(int n)
{
	int i,m = 0,y = n,x = n;
    for (i = 0;x > 0;++i)
    	x /= 10;
    for (--i;i >= 0;--i)
    {
    	m += (n % 10) * pow(10,i);
        n /= 10;
    }
    if (m == y)
    return 0;
    else 
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",is_int_pal(n));
    return 0;
}
