#include <stdio.h>
int fac_bit_count(int n)
{
	int pro=1,i=0;
    for ( ;n >= 1; )
    {
    	pro *= n;
        --n;
    }
    for (i = 0;pro > 1;++i)
    {
        pro /= 10;
    }
    return i;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fac_bit_count(n));
    return 0;
}
