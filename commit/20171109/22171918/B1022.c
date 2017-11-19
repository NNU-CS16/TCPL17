#include <stdio.h>
void getD(unsigned int C, int D);
int main ()
{
	unsigned int A, B, C;
	int D;
	scanf("%d%d%d", &A, &B, &D);
	C = A + B;
	getD(C, D);
    printf("\n");
	return 0;
}
getD(unsigned int C, int D)
{
	if (C / D == 0)
	printf("%d", C % D);
	else
	{
		getD(C / D, D);
		printf("%d", C % D);
	}
}
  
