#include<stdio.h>
int Fib(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 2;
		return Fib(n-1)+Fib(n-2);
}

int main()
{
printf("Fib(5)=%d",Fib(5));
return 0;
}

