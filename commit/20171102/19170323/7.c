 #include <stdio.h>
 int gcd_recursive(int m, int n);
 int gcd_iterative(int m, int n);

 int main()
{
	int a, b, x, y;
	scanf("%d%d", &a, &b);
	x = gcd_recursive(a,b);
	y = gcd_iterative(a,b);

	printf("%d %d\n", x, y);

	return 0;
}

 int gcd_recursive(int m, int n)
{
	int temp;
	if (m < n)
   {
	temp = m;
	m = n;
    n = temp;
   }
	if (m%n == 0)
    return n;
    else 
    return gcd_recursive(n,m%n);
}

 int gcd_iterative(int m, int n)
{
	int i, k;
	if (m < n)
   {
		i = m;
		m = n;
		n = i;
   }
	while (k != 0)
   {
     k = m%n;
     m = n;
     n = k;
   }
	return m;
}


