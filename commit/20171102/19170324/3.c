#include <stdio.h>

int is_pow2(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",is_pow2(n));

	return 0;
}

int is_pow2(int n)
{
	if(n==1||n%2==0)
	  return 0;
	else
	  return -1;
}
