 #include <stdio.h>
 
 int bin_insert(int n, int m, int j, int i)
{	
	int temp;
	temp = m<<j;
	n |= temp;
	return n;
}

 int main()
{
	int a, b, j, i, sum;
	scanf("%d%d%d%d", &a, &b, &j, &i);
	sum = bin_insert(a, b, j, i);
	printf("%d\n", sum);
	return 0;
}
