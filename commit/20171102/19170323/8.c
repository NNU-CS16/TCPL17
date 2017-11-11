 #include <stdio.h>
 int gcd(int m, int n)
{
	int i, k, j;
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

 int lcm(int m,int n)
{
	int x, y, sum;
	x = m/gcd(m,n);
	y = n/gcd(m,n);
	sum = x*y*gcd(m,n);
	return sum;
}

 int main()
{
	int a, b, gbs;
	scanf("%d%d", &a, &b);
	gbs = lcm(a, b);

	printf("%d\n", gbs);

	return 0;
}
