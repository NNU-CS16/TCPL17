 #include <stdio.h>

 int main()
{
	int A, B, D;
	scanf("%d %d %d", &A, &B, &D);
	int M = A + B;
	int i = 0, n = 1, a[10], m, sum = 0;
	while(M != 0)
	{
		m = M%D;
		M = M/D;
		a[i] = m;
		i++;
	}
	int j;
	for (j = 0; j < i; j++)
	{
		sum += a[j]*n;
		n *= 10;
	}
	printf("%d\n", sum);
	return 0;
}
