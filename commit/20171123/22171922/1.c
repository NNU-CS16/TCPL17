#include<stdio.h>

long long sum(long long n);
int main()
{
	int N;
	scanf("%d",&N);
	printf("%lld\n",sum(N));
	return 0;
}
long long sum(long long n) 
{
    if (n == 1) 
	{
        return 1;
    }
    if (n % 2 == 0) 
	{
        return  sum(n / 2) + n * n / 4;
    }
    else 
	{
        return sum(n - 1) + n; 
    }
}	
