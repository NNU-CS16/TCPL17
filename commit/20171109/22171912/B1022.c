/*B1022.c_D进制转换*/
#include <stdio.h>

void print_hex(int n, int D)
{
	int a[1000000], c;
	if (n == 0)
		printf("0");
	while (n != 0)
	{
		a[c] = n%D;
		c++;
		n = n/D;
	}
	c--;
	for( ; c >= 0; c--)
		printf("%d", a[c]);
}

int main()
{
	int A, B, D;
	int a[1000000], c=0, n;
	scanf("%d%d%d", &A, &B, &D);
	n = A + B;					//求和
	print_hex(n, D);			//和转换为D进制
	return 0;
}
