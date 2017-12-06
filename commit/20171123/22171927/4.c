#include <stdio.h>
int add(int n1, int n2);
int main()
{
	int n1,n2;
	int sum;
	printf("Please input n1,n2:");
	scanf("%d%d",&n1,&n2);
	sum = add(n1, n2);
	printf("%d\n",sum);
	return 0;
}
int add(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	int p = n1 ^ n2;
	int q = (n1 & n2) << 1;
	return add(p,q);
}
