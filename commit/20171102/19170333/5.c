#include <stdio.h>
int fac_bit_count(int n);
long long  fac(int n)
{
	long long ans;
    for (ans = 1; n > 1; n--)
    	ans *= n;
    return ans;
}
int fac_bit_count(int n)
{   
    int i = 0;
    long long ans;
    ans = fac(n);
    printf("%lld", ans);
    while (ans / 10 > 0)
    {
    	i++;
        ans = ans / 10;
    }
    return i+1;
}
int main()
{
    int n, i;
    scanf("%d",&n);
    i = fac_bit_count(n);
    printf("\n %d \n", i) ;
    return  0;
} 
