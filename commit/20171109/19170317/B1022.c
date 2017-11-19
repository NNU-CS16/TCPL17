#include <stdio.h>

int main()
{
	int A, B, C, D;
	int a, i = 0, j;
	int mem[100];
	scanf("%d%d%d", &A, &B, &D);
	C = A + B;
	do
	{
	  a = C % D;
	  mem[i] = a;
	  ++i;
	  j = C / D;
	  C = j;
	}while (j != 0);
	for (i -= 1; i>=0; --i)
	  printf("%d", mem[i]);
	printf("\n");
	return 0;
}
