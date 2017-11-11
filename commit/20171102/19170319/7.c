#include <stdio.h>
int GCD_recursive(int m,int n)
{
	int r;
    while (1)
    {
    	r = m % n;
        if (r == 0)
        {
        	return n;
    		break;
        }
        m = n;
        n = r;
    }
}
int GCD_iterative(int m,int n)
{
	return (!n)?m:GCD_iterative(n,m % n);
}
int main()
{
	int m,n,i;
    scanf("%d%d",&m,&n);
    if (n > m)
    {
    	i = m;
        m = n;
        n = i;
    }
    printf("最大公约数为%d\n",GCD_recursive(m,n));
    printf("最大公约数为%d",GCD_iterative(m,n));
    return 0;
}
