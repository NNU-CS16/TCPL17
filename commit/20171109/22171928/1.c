#include<stdio.h>
int Fib(int n,int a,int b);

int main()
{
  int m;
  scanf("%d",&m);
  printf("Fib(m)=%d\n",Fib(m,1,1));
  return 0;
}

int Fib(int n, int a, int b)
{
	if(n <= 2)
	  return b;
	return Fib(n-1, b, a+b);
}
