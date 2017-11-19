#include <stdio.h>
unsigned long int Fib(int n,unsigned long int a,unsigned int b);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",Fib(n,1,2)%100007);
	return 0;
}

unsigned long int Fib(int n,unsigned long int a,unsigned int b)
{
	if(n==1)
		return a;
	if(n==2)
		return b;
	return Fib(n-1,b,a+b);
}
