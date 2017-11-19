#include <stdio.h>
int Fib(int n,int a,int b)
{
	if (n <= 2)
		return b;
	return Fib(n - 1,b,a+b);
}
int main()
{
	printf("Fib(5)=%d",Fib(5,1,1));
	return 0;
}
