#include <stdio.h>
#include <string.h>
int main()
{
	char A[1000], B[1000];
	int a[1000] = {0}, b[1000] = {0}, c[1000] = {0};
	int lena, lenb, lenmax, i;
	scanf("s", A);
	lena = strlen(A);
	for (i = 0; i < lena; i++)
		a[i] = A[lena - i - 1] - '0';
	scanf("%s", B);
	lenb = strlen(B);
	for (i = 0; i < lenb; i++)
		b[i] = B[lenb - i - 1] - '0';
	if (lena > lenb)
		lenmax = lena;
	else
		lenmax = lenb;
	int j = 0;
	for (i = 0; i < lenmax; i++)
	{
		c[i] = (a[i] + b[i] + j) % 10;
		j = (a[i] + b[i] + j) / 10;
	}
	if (j != 0)
		c[lenmax] = 1;
	if (c[lenmax] == 1) 
		printf("1");
	for (i = lenmax - 1; i >= 0; i--)
		printf("%d", c[i]);
	return 0;
}

