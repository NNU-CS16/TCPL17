 #include <stdio.h>
 int fac_bit_count(int n)
{
	int i, sum = 1, m = 0;

	for(i = n; i >= 1; i--)
  {
		sum = sum*i;
  }
	do
   {
	sum = sum/10;
	m++;
   }while (sum != 0);

	return m;
}

 int main()
{
	int a, b;
	scanf("%d", &a);
	b = fac_bit_count(a);

	printf("%d\n", b);
 
	return 0;
}
