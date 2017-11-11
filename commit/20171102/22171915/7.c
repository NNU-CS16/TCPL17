  #include<stdio.h>
  int GCD_recursive(int m, int n);
  int GCD_iterative(int m, int n);

  int m, n;
  int main()
  {
	printf("输入m,n:");
	scanf("%d %d", &m, &n);
	GCD_recursive(m, n);
    GCD_iterative(m, n);
	printf("最大公约数:%d\n", GCD_recursive(m, n));
	printf("最大公约数:%d\n", GCD_iterative(m, n));
	return 0;
  }

  int GCD_recursive(int m, int n)
  {
	if (m%n > 0)
	return GCD_recursive(n, m%n);
	else
	return n;
  }

  int GCD_iterative(int m, int n)
  {
	int temp;
	while (m%n != 0)
	{
	temp =m%n;
	m=n;
	n=temp;
	}
	return n;
   }
