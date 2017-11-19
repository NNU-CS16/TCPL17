#include<stdio.h>
int fib(int,int,int);
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",fib(n,1,1));
return 0;
}

int fib(int n,int fir,int sec)
{
int temp;
	if (n==1)
		return fir;
	return fib(n-1,sec,fir+sec);
}
