#include <stdio.h>

int Hanoi2(int n)
{
	if(n==1)
		return 2;
	return 2*Hanoi2(n-1)+2;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",Hanoi2(n));
	return 0;
}
