#include<stdio.h>//𝑓(x)为x最大的奇数约数,求出𝑓(1) + 𝑓(2) + ⋯+ 𝑓(𝑁)
int f(int n)
{
	for( int i = n; i >= 1; i--)
	{
		if(n % i == 0 && i%2 != 0)
    		return i;
	}
	return 1;
}
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    	sum += f(i);
    printf("%d\n", sum);
    return 0;
}
