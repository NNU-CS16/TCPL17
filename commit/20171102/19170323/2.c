 #include <stdio.h>

 void print_hex(int a);

 int main()
{
	int a;
	scanf("%d", &a);
	print_hex(a);

	return 0;
}

 void print_hex(int a)
{
	int sum = 0, m, n = 1;
	do
   {
	m = a%16;
	a = a/16;
	sum += m*n;
	n *= 10;
   }while (a != 0);
 
	printf("%d\n", sum);
}
