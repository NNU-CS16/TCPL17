/*2.c_十六进制转换*/
#include <stdio.h>

void print_hex(int a[], int i, int c, int n)
{
	scanf("%d", &n);
    printf("转换成十六进制：");
	while (n != 0)
	{
		i = n%16;
		a[c] = i;
		c++;
		n = n/16;
	}
	c--;
	for( ; c >= 0; c--)
	{
		if (a[c] <= 9)
			printf("%d", a[c]);
		if (a[c] == 10)
			printf("A");
		if (a[c] == 11)
			printf("B");
		if (a[c] == 12)
			printf("C");
		if (a[c] == 13)
			printf("D");
		if (a[c] == 14)
			printf("E");
		if (a[c] == 15)
			printf("F");
	}
}

int main()
{
	int a[30], i, c=0, n;
	printf("请输入正整数n：");
	print_hex(a, i, c, n);
	printf("\n");
	return 0;
}
