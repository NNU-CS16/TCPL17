#include <stdio.h>

int add(int n1, int n2)
{
	int s, carry;
	if (n2 == 0)
		return n1;
	s = n1 ^ n2;
	carry = (n1 & n2) << 1;
	return add(s, carry);
}

int main()
{
	int n1, n2;
	printf("请输入两个整数n1,n2:  ");
	scanf("%d%d", &n1, &n2);
	int sum = add(n1, n2);
	printf("%d\n", sum);
	return 0;
}

