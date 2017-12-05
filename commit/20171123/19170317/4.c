#include <stdio.h>
int add(int n1, int n2);

int main()
{
	int n1, n2;
	printf("输入两个整数:");
	scanf("%d%d", &n1, &n2);
	printf("%d\n", add(n1, n2));
	return 0;
}

int add(int n1, int n2)
{
	int num1, num2;
	do
	{
	  num1 = n1 ^ n2;
	  num2 = (n1 & n2) << 1;
	  n1 = num1;
	  n2 = num2;
	}while (n2 != 0);
	return num1;
}
